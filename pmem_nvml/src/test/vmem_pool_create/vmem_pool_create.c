/*
 * Copyright (c) 2014, Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in
 *       the documentation and/or other materials provided with the
 *       distribution.
 *
 *     * Neither the name of Intel Corporation nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * vmem_pool_create.c -- unit test for vmem_pool_create
 *
 * usage: vmem_pool_create directory
 */

#include "unittest.h"

VMEM *Vmp;

/*
 * signal_handler -- called on SIGSEGV
 */
void
signal_handler(int sig)
{
	OUT("signal: %s", strsignal(sig));

	vmem_pool_delete(Vmp);

	DONE(NULL);
}

int
main(int argc, char *argv[])
{
	START(argc, argv, "vmem_pool_create");

	if (argc < 2 || argc > 3)
		FATAL("usage: %s directory", argv[0]);

	Vmp = vmem_pool_create(argv[1], VMEM_MIN_POOL);

	if (Vmp == NULL)
		OUT("!vmem_pool_create");
	else {
		struct sigvec v = { 0 };

		v.sv_handler = signal_handler;
		if (sigvec(SIGSEGV, &v, NULL) < 0)
			FATAL("!sigvec");

		/* try to deref the opaque handle */
		char x = *(char *)Vmp;
		OUT("x = %c", x);
	}

	FATAL("no signal received");
}
