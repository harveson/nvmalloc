#
# Copyright (c) 2015, Intel Corporation
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
# examples/libpmemobj/string_store_tx/Makefile -- build the intro 2 example
#
PROGS = writer reader

INCDIR ?= ../../../include
LIBDIR ?= ../../../debug

INCS = -I$(INCDIR)
LIBS = -Wl,-rpath=$(LIBDIR) -L$(LIBDIR) -lpmemobj -lpmem -pthread
CFLAGS = -std=gnu99 -ggdb -Wall -Werror
CSTYLE = ../../../../utils/cstyle

all:     TARGET = all
clean:   TARGET = clean
clobber: TARGET = clobber
cstyle:  TARGET = cstyle

all: $(PROGS)

clean: $(DIRS)
	$(RM) *.o core a.out

clobber: clean $(DIRS)
	$(RM) $(PROGS)

cstyle: $(DIRS)
	$(CSTYLE) -pP *.[ch]

.c.o:
	$(CC) -c -o $@ $(CFLAGS) $(INCS) $<

$(PROGS):
	$(CC) -o $@ $< $(LIBS)

writer: writer.o
reader: reader.o

$(DIRS):
	$(MAKE) -C $@ $(TARGET)

.PHONY: all clean clobber cstyle $(DIRS)
