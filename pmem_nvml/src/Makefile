#
# Copyright (c) 2014, Intel Corporation
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
#     * Redistributions of source code must retain the above copyright
#       notice, this list of conditions and the following disclaimer.
#
#     * Redistributions in binary form must reproduce the above copyright
#       notice, this list of conditions and the following disclaimer in
#       the documentation and/or other materials provided with the
#       distribution.
#
#     * Neither the name of Intel Corporation nor the names of its
#       contributors may be used to endorse or promote products derived
#       from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#

#
# src/Makefile -- build the NVM Library
#
VARIANTS = debug nondebug
.NOTPARALLEL: $(VARIANTS)
JEMALLOC_DIR = $(CURDIR)/jemalloc
export JEMALLOC_DIR


HEADERS_DESTDIR = $(DESTDIR)/usr/include
HEADERS_INSTALL = include/libpmem.h include/libvmem.h include/libpmemobj.h include/libpmemblk.h include/libpmemlog.h

SCOPEFILES = *.[ch] include/*.[ch] jemalloc/src/*.[ch]\
	     $(JEMALLOC_DIR)/include/jemalloc/*.h\
	     $(JEMALLOC_DIR)/include/jemalloc/internal/*.h\
	     $(JEMALLOC_DIR)/debug/include/jemalloc/*.h\
	     $(JEMALLOC_DIR)/debug/include/jemalloc/internal/*.h\
	     $(JEMALLOC_DIR)/nondebug/include/jemalloc/*.h\
	     $(JEMALLOC_DIR)/nondebug/include/jemalloc/internal/*.h

all     : TARGET = all
clean   : TARGET = clean
clobber : TARGET = clobber
jeconfig: TARGET = jeconfig
jemalloc: TARGET = jemalloc
install : TARGET = install

all jeconfig jemalloc clean clobber install: $(VARIANTS)

$(VARIANTS):
	$(MAKE) -C $@ $(TARGET)

clean:
	$(MAKE) -C test clean
	rm -rf nodebub*.so*
	$(RM) tags cscope.in.out cscope.out cscope.po.out

clobber:
	$(MAKE) -C test clobber

test: $(VARIANTS)
	$(MAKE) -C test all
	$(MAKE) -C nondebug jemalloc-tests

check: test check-jemalloc
	cd test && ./RUNTESTS

check-jemalloc: check-jemalloc-debug check-jemalloc-nondebug

check-jemalloc-debug:
	$(MAKE) -C debug jemalloc-check

check-jemalloc-nondebug:
	$(MAKE) -C nondebug jemalloc-check

cscope:
	cscope -q -b $(SCOPEFILES)
	ctags -e $(SCOPEFILES)

cstyle:
	../utils/cstyle -pP *.[ch] include/*.[ch]
	$(MAKE) -C test cstyle

install:
	install -d $(HEADERS_DESTDIR)
	install -p -m 0644 $(HEADERS_INSTALL) $(HEADERS_DESTDIR)

.PHONY: all jeconfig jemalloc clean clobber test check cscope cstyle install\
	check-jemalloc check-jemalloc-debug check-jemalloc-nondebug $(VARIANTS)
