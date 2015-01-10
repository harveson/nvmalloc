/*
 * Copyright (c) 2011 Google, Inc
 * Contributed by Stephane Eranian <eranian@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
 * OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * This file is part of libpfm, a performance monitoring support library for
 * applications on Linux.
 *
 * This file has been automatically generated.
 *
 * PMU: pm (Intel Pentium M)
 */

static const intel_x86_umask_t pm_l2_ifetch[]={
   { .uname  = "I",
     .udesc  = "Invalid state",
     .ucode = 0x100,
   },
   { .uname  = "S",
     .udesc  = "Shared state",
     .ucode = 0x200,
   },
   { .uname  = "E",
     .udesc  = "Exclusive state",
     .ucode = 0x400,
   },
   { .uname  = "M",
     .udesc  = "Modified state",
     .ucode = 0x800,
   },
};

static const intel_x86_umask_t pm_bus_drdy_clocks[]={
   { .uname  = "SELF",
     .udesc  = "Clocks when processor is driving bus",
     .ucode = 0x0,
     .uflags= INTEL_X86_NCOMBO | INTEL_X86_DFL,
   },
   { .uname  = "ANY",
     .udesc  = "Clocks when any agent is driving bus",
     .ucode = 0x2000,
     .uflags= INTEL_X86_NCOMBO,
   },
};

static const intel_x86_umask_t pm_mmx_instr_type_exec[]={
   { .uname  = "MUL",
     .udesc  = "MMX packed multiply instructions executed",
     .ucode = 0x100,
   },
   { .uname  = "SHIFT",
     .udesc  = "MMX packed shift instructions executed",
     .ucode = 0x200,
   },
   { .uname  = "PACK",
     .udesc  = "MMX pack operation instructions executed",
     .ucode = 0x400,
   },
   { .uname  = "UNPACK",
     .udesc  = "MMX unpack operation instructions executed",
     .ucode = 0x800,
   },
   { .uname  = "LOGICAL",
     .udesc  = "MMX packed logical instructions executed",
     .ucode = 0x1000,
   },
   { .uname  = "ARITH",
     .udesc  = "MMX packed arithmetic instructions executed",
     .ucode = 0x2000,
   },
};

static const intel_x86_umask_t pm_fp_mmx_trans[]={
   { .uname  = "TO_FP",
     .udesc  = "From MMX instructions to floating-point instructions",
     .ucode = 0x0,
     .uflags= INTEL_X86_NCOMBO,
   },
   { .uname  = "TO_MMX",
     .udesc  = "From floating-point instructions to MMX instructions",
     .ucode = 0x100,
     .uflags= INTEL_X86_NCOMBO,
   },
};

static const intel_x86_umask_t pm_seg_rename_stalls[]={
   { .uname  = "ES",
     .udesc  = "Segment register ES",
     .ucode = 0x100,
   },
   { .uname  = "DS",
     .udesc  = "Segment register DS",
     .ucode = 0x200,
   },
   { .uname  = "FS",
     .udesc  = "Segment register FS",
     .ucode = 0x400,
   },
   { .uname  = "GS",
     .udesc  = "Segment register GS",
     .ucode = 0x800,
   },
};

static const intel_x86_umask_t pm_emon_kni_pref_dispatched[]={
   { .uname  = "NTA",
     .udesc  = "Prefetch NTA",
     .ucode = 0x0,
     .uflags= INTEL_X86_NCOMBO,
   },
   { .uname  = "T1",
     .udesc  = "Prefetch T1",
     .ucode = 0x100,
     .uflags= INTEL_X86_NCOMBO,
   },
   { .uname  = "T2",
     .udesc  = "Prefetch T2",
     .ucode = 0x200,
     .uflags= INTEL_X86_NCOMBO,
   },
   { .uname  = "WEAK",
     .udesc  = "Weakly ordered stores",
     .ucode = 0x300,
     .uflags= INTEL_X86_NCOMBO,
   },
};

static const intel_x86_umask_t pm_emon_est_trans[]={
   { .uname  = "ALL",
     .udesc  = "All transitions",
     .ucode = 0x0,
   },
   { .uname  = "FREQ",
     .udesc  = "Only frequency transitions",
     .ucode = 0x200,
   },
};

static const intel_x86_umask_t pm_emon_fused_uops_ret[]={
   { .uname  = "ALL",
     .udesc  = "All fused micro-ops",
     .ucode = 0x0,
   },
   { .uname  = "LD_OP",
     .udesc  = "Only load+Op micro-ops",
     .ucode = 0x100,
   },
   { .uname  = "STD_STA",
     .udesc  = "Only std+sta micro-ops",
     .ucode = 0x200,
   },
};

static const intel_x86_umask_t pm_emon_sse_sse2_inst_retired[]={
   { .uname  = "SSE_PACKED_SCALAR_SINGLE",
     .udesc  = "SSE Packed Single and Scalar Single",
     .ucode = 0x0,
     .uflags= INTEL_X86_NCOMBO,
   },
   { .uname  = "SSE_SCALAR_SINGLE",
     .udesc  = "SSE Scalar Single",
     .ucode = 0x100,
     .uflags= INTEL_X86_NCOMBO,
   },
   { .uname  = "SSE2_PACKED_DOUBLE",
     .udesc  = "SSE2 Packed Double",
     .ucode = 0x200,
     .uflags= INTEL_X86_NCOMBO,
   },
   { .uname  = "SSE2_SCALAR_DOUBLE",
     .udesc  = "SSE2 Scalar Double",
     .ucode = 0x300,
     .uflags= INTEL_X86_NCOMBO,
   },
};

static const intel_x86_umask_t pm_l2_ld[]={
   { .uname  = "I",
     .udesc  = "Invalid state",
     .ucode = 0x100,
   },
   { .uname  = "S",
     .udesc  = "Shared state",
     .ucode = 0x200,
   },
   { .uname  = "E",
     .udesc  = "Exclusive state",
     .ucode = 0x400,
   },
   { .uname  = "M",
     .udesc  = "Modified state",
     .ucode = 0x800,
   },
   { .uname  = "EXCL_HW_PREFETCH",
     .udesc  = "Exclude hardware prefetched lines",
     .ucode = 0x0,
   },
   { .uname  = "ONLY_HW_PREFETCH",
     .udesc  = "Only hardware prefetched lines",
     .ucode = 0x1000,
   },
   { .uname  = "NON_HW_PREFETCH",
     .udesc  = "Non hardware prefetched lines",
     .ucode = 0x2000,
   },
};

static const intel_x86_entry_t intel_pm_pe[]={
{ .name   = "CPU_CLK_UNHALTED",
  .desc   = "Number cycles during which the processor is not halted and not in a thermal trip",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x79,
},
{ .name   = "INST_RETIRED",
  .desc   = "Number of instructions retired",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xc0,
},
{ .name   = "DATA_MEM_REFS",
  .desc   = "All loads from any memory type. All stores to any memory typeEach part of a split is counted separately. The internal logic counts not only memory loads and stores but also internal retries. 80-bit floating point accesses are double counted, since they are decomposed into a 16-bit exponent load and a 64-bit mantissa load. Memory accesses are only counted when they are  actually performed (such as a load that gets squashed because a previous cache miss is outstanding to the same address, and which finally gets performed, is only counted once). Does not include I/O accesses or other non-memory accesses",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x43,
},
{ .name   = "DCU_LINES_IN",
  .desc   = "Total lines allocated in the DCU",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x45,
},
{ .name   = "DCU_M_LINES_IN",
  .desc   = "Number of M state lines allocated in the DCU",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x46,
},
{ .name   = "DCU_M_LINES_OUT",
  .desc   = "Number of M state lines evicted from the DCU. This includes evictions via snoop HITM, intervention or replacement",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x47,
},
{ .name   = "DCU_MISS_OUTSTANDING",
  .desc   = "Weighted number of cycle while a DCU miss is outstanding, incremented by the number of cache misses at any particular time. Cacheable read requests only are considered. Uncacheable requests are excluded Read-for-ownerships are counted, as well as line fills, invalidates, and stores",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x48,
},
{ .name   = "IFU_IFETCH",
  .desc   = "Number of instruction fetches, both cacheable and noncacheable including UC fetches",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x80,
},
{ .name   = "IFU_IFETCH_MISS",
  .desc   = "Number of instruction fetch misses. All instructions fetches that do not hit the IFU (i.e., that produce memory requests). Includes UC accesses",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x81,
},
{ .name   = "ITLB_MISS",
  .desc   = "Number of ITLB misses",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x85,
},
{ .name   = "IFU_MEM_STALL",
  .desc   = "Number of cycles instruction fetch is stalled for any reason. Includs IFU cache misses, ITLB misses, ITLB faults, and other minor stalls",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x86,
},
{ .name   = "ILD_STALL",
  .desc   = "Number of cycles that the instruction length decoder is stalled",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x87,
},
{ .name   = "L2_IFETCH",
  .desc   = "Number of L2 instruction fetches. This event indicates that a normal instruction fetch was received by the L2. The count includes only L2 cacheable instruction fetches: it does not include UC instruction fetches It does not include ITLB miss accesses",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x28,
  .numasks = LIBPFM_ARRAY_SIZE(pm_l2_ifetch),
  .ngrp = 1,
  .umasks = pm_l2_ifetch,
},
{ .name   = "L2_ST",
  .desc   = "Number of L2 data stores. This event indicates that a normal, unlocked, store memory access was received by the L2. Specifically, it indicates that the DCU sent a read-for ownership request to the L2. It also includes Invalid to Modified requests sent by the DCU to the L2. It includes only L2 cacheable memory accesses;  it does not include I/O accesses, other non-memory accesses, or memory accesses such as UC/WT memory accesses. It does include L2 cacheable TLB miss memory accesses",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x2a,
  .numasks = LIBPFM_ARRAY_SIZE(pm_l2_ifetch),
  .ngrp = 1,
  .umasks = pm_l2_ifetch, /* identical to actual umasks list for this event */
},
{ .name   = "L2_M_LINES_INM",
  .desc   = "Number of modified lines allocated in the L2",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x25,
},
{ .name   = "L2_RQSTS",
  .desc   = "Total number of L2 requests",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x2e,
  .numasks = LIBPFM_ARRAY_SIZE(pm_l2_ifetch),
  .ngrp = 1,
  .umasks = pm_l2_ifetch, /* identical to actual umasks list for this event */
},
{ .name   = "L2_ADS",
  .desc   = "Number of L2 address strobes",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x21,
},
{ .name   = "L2_DBUS_BUSY",
  .desc   = "Number of cycles during which the L2 cache data bus was busy",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x22,
},
{ .name   = "L2_DBUS_BUSY_RD",
  .desc   = "Number of cycles during which the data bus was busy transferring read data from L2 to the processor",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x23,
},
{ .name   = "BUS_DRDY_CLOCKS",
  .desc   = "Number of clocks during which DRDY# is asserted. Utilization of the external system data bus during data transfers",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x62,
  .numasks = LIBPFM_ARRAY_SIZE(pm_bus_drdy_clocks),
  .ngrp = 1,
  .umasks = pm_bus_drdy_clocks,
},
{ .name   = "BUS_LOCK_CLOCKS",
  .desc   = "Number of clocks during which LOCK# is asserted on the external system bus",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x63,
  .numasks = LIBPFM_ARRAY_SIZE(pm_bus_drdy_clocks),
  .ngrp = 1,
  .umasks = pm_bus_drdy_clocks, /* identical to actual umasks list for this event */
},
{ .name   = "BUS_REQ_OUTSTANDING",
  .desc   = "Number of bus requests outstanding. This counter is incremented by the number of cacheable read bus requests outstanding in any given cycle",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x60,
},
{ .name   = "BUS_TRANS_BRD",
  .desc   = "Number of burst read transactions",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x65,
  .numasks = LIBPFM_ARRAY_SIZE(pm_bus_drdy_clocks),
  .ngrp = 1,
  .umasks = pm_bus_drdy_clocks, /* identical to actual umasks list for this event */
},
{ .name   = "BUS_TRANS_RFO",
  .desc   = "Number of completed read for ownership transactions",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x66,
  .numasks = LIBPFM_ARRAY_SIZE(pm_bus_drdy_clocks),
  .ngrp = 1,
  .umasks = pm_bus_drdy_clocks, /* identical to actual umasks list for this event */
},
{ .name   = "BUS_TRANS_WB",
  .desc   = "Number of completed write back transactions",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x67,
  .numasks = LIBPFM_ARRAY_SIZE(pm_bus_drdy_clocks),
  .ngrp = 1,
  .umasks = pm_bus_drdy_clocks, /* identical to actual umasks list for this event */
},
{ .name   = "BUS_TRAN_IFETCH",
  .desc   = "Number of completed instruction fetch transactions",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x68,
  .numasks = LIBPFM_ARRAY_SIZE(pm_bus_drdy_clocks),
  .ngrp = 1,
  .umasks = pm_bus_drdy_clocks, /* identical to actual umasks list for this event */
},
{ .name   = "BUS_TRAN_INVAL",
  .desc   = "Number of completed invalidate transactions",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x69,
  .numasks = LIBPFM_ARRAY_SIZE(pm_bus_drdy_clocks),
  .ngrp = 1,
  .umasks = pm_bus_drdy_clocks, /* identical to actual umasks list for this event */
},
{ .name   = "BUS_TRAN_PWR",
  .desc   = "Number of completed partial write transactions",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x6a,
  .numasks = LIBPFM_ARRAY_SIZE(pm_bus_drdy_clocks),
  .ngrp = 1,
  .umasks = pm_bus_drdy_clocks, /* identical to actual umasks list for this event */
},
{ .name   = "BUS_TRANS_P",
  .desc   = "Number of completed partial transactions",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x6b,
  .numasks = LIBPFM_ARRAY_SIZE(pm_bus_drdy_clocks),
  .ngrp = 1,
  .umasks = pm_bus_drdy_clocks, /* identical to actual umasks list for this event */
},
{ .name   = "BUS_TRANS_IO",
  .desc   = "Number of completed I/O transactions",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x6c,
  .numasks = LIBPFM_ARRAY_SIZE(pm_bus_drdy_clocks),
  .ngrp = 1,
  .umasks = pm_bus_drdy_clocks, /* identical to actual umasks list for this event */
},
{ .name   = "BUS_TRAN_DEF",
  .desc   = "Number of completed deferred transactions",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x6d,
  .numasks = LIBPFM_ARRAY_SIZE(pm_bus_drdy_clocks),
  .ngrp = 1,
  .umasks = pm_bus_drdy_clocks, /* identical to actual umasks list for this event */
},
{ .name   = "BUS_TRAN_BURST",
  .desc   = "Number of completed burst transactions",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x6e,
  .numasks = LIBPFM_ARRAY_SIZE(pm_bus_drdy_clocks),
  .ngrp = 1,
  .umasks = pm_bus_drdy_clocks, /* identical to actual umasks list for this event */
},
{ .name   = "BUS_TRAN_ANY",
  .desc   = "Number of all completed bus transactions. Address bus utilization can be calculated knowing the minimum address bus occupancy. Includes special cycles, etc.",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x70,
  .numasks = LIBPFM_ARRAY_SIZE(pm_bus_drdy_clocks),
  .ngrp = 1,
  .umasks = pm_bus_drdy_clocks, /* identical to actual umasks list for this event */
},
{ .name   = "BUS_TRAN_MEM",
  .desc   = "Number of completed memory transactions",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x6f,
  .numasks = LIBPFM_ARRAY_SIZE(pm_bus_drdy_clocks),
  .ngrp = 1,
  .umasks = pm_bus_drdy_clocks, /* identical to actual umasks list for this event */
},
{ .name   = "BUS_DATA_RECV",
  .desc   = "Number of bus clock cycles during which this processor is receiving data",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x64,
},
{ .name   = "BUS_BNR_DRV",
  .desc   = "Number of bus clock cycles during which this processor is driving the BNR# pin",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x61,
},
{ .name   = "BUS_HIT_DRV",
  .desc   = "Number of bus clock cycles during which this processor is driving the HIT# pin",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x7a,
},
{ .name   = "BUS_HITM_DRV",
  .desc   = "Number of bus clock cycles during which this processor is driving the HITM# pin",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x7b,
},
{ .name   = "BUS_SNOOP_STALL",
  .desc   = "Number of clock cycles during which the bus is snoop stalled",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x7e,
},
{ .name   = "FLOPS",
  .desc   = "Number of computational floating-point operations retired. Excludes floating-point computational operations that cause traps or assists. Includes internal sub-operations for complex floating-point instructions like transcendentals. Excludes floating point loads and stores",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x1,
  .code = 0xc1,
},
{ .name   = "FP_COMP_OPS_EXE",
  .desc   = "Number of computational floating-point operations executed. The number of FADD, FSUB, FCOM, FMULs, integer MULs and IMULs, FDIVs, FPREMs, FSQRTS, integer DIVs, and IDIVs. This number does not include the number of cycles, but the number of operations. This event does not distinguish an FADD used in the middle of a transcendental flow from a separate FADD instruction",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x1,
  .code = 0x10,
},
{ .name   = "FP_ASSIST",
  .desc   = "Number of floating-point exception cases handled by microcode.",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x2,
  .code = 0x11,
},
{ .name   = "MUL",
  .desc   = "Number of multiplies.This count includes integer as well as FP multiplies and is speculative",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x2,
  .code = 0x12,
},
{ .name   = "DIV",
  .desc   = "Number of divides.This count includes integer as well as FP divides and is speculative",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x2,
  .code = 0x13,
},
{ .name   = "CYCLES_DIV_BUSY",
  .desc   = "Number of cycles during which the divider is busy, and cannot accept new divides. This includes integer and FP divides, FPREM, FPSQRT, etc. and is speculative",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x1,
  .code = 0x14,
},
{ .name   = "LD_BLOCKS",
  .desc   = "Number of load operations delayed due to store buffer blocks. Includes counts caused by preceding stores whose addresses are unknown, preceding stores whose addresses are known but whose data is unknown, and preceding stores that conflicts with the load but which incompletely overlap the load",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x3,
},
{ .name   = "SB_DRAINS",
  .desc   = "Number of store buffer drain cycles. Incremented every cycle the store buffer is draining. Draining is caused by serializing operations like CPUID, synchronizing operations like XCHG, interrupt acknowledgment, as well as other conditions (such as cache flushing).",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x4,
},
{ .name   = "MISALIGN_MEM_REF",
  .desc   = "Number of misaligned data memory references. Incremented by 1 every cycle during which, either the processor's load or store pipeline dispatches a misaligned micro-op Counting is performed if it is the first or second half or if it is blocked, squashed, or missed. In this context, misaligned means crossing a 64-bit boundary",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x5,
},
{ .name   = "UOPS_RETIRED",
  .desc   = "Number of micro-ops retired",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xc2,
},
{ .name   = "INST_DECODED",
  .desc   = "Number of instructions decoded",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xd0,
},
{ .name   = "HW_INT_RX",
  .desc   = "Number of hardware interrupts received",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xc8,
},
{ .name   = "CYCLES_INT_MASKED",
  .desc   = "Number of processor cycles for which interrupts are disabled",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xc6,
},
{ .name   = "CYCLES_INT_PENDING_AND_MASKED",
  .desc   = "Number of processor cycles for which interrupts are disabled and interrupts are pending.",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xc7,
},
{ .name   = "BR_INST_RETIRED",
  .desc   = "Number of branch instructions retired",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xc4,
},
{ .name   = "BR_MISS_PRED_RETIRED",
  .desc   = "Number of mispredicted branches retired",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xc5,
},
{ .name   = "BR_TAKEN_RETIRED",
  .desc   = "Number of taken branches retired",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xc9,
},
{ .name   = "BR_MISS_PRED_TAKEN_RET",
  .desc   = "Number of taken mispredicted branches retired",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xca,
},
{ .name   = "BR_INST_DECODED",
  .desc   = "Number of branch instructions decoded",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xe0,
},
{ .name   = "BTB_MISSES",
  .desc   = "Number of branches for which the BTB did not produce a prediction",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xe2,
},
{ .name   = "BR_BOGUS",
  .desc   = "Number of bogus branches",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xe4,
},
{ .name   = "BACLEARS",
  .desc   = "Number of times BACLEAR is asserted. This is the number of times that a static branch prediction was made, in which the branch decoder decided to make a branch prediction because the BTB did not",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xe6,
},
{ .name   = "RESOURCE_STALLS",
  .desc   = "Incremented by 1 during every cycle for which there is a resource related stall. Includes register renaming buffer entries, memory buffer entries. Does not include stalls due to bus queue full, too many cache misses, etc. In addition to resource related stalls, this event counts some other events. Includes stalls arising during branch misprediction recovery, such as if retirement of the mispredicted branch is delayed and stalls arising while store buffer is draining from synchronizing operations",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xa2,
},
{ .name   = "PARTIAL_RAT_STALLS",
  .desc   = "Number of cycles or events for partial stalls. This includes flag partial stalls",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xd2,
},
{ .name   = "SEGMENT_REG_LOADS",
  .desc   = "Number of segment register loads.",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x6,
},
{ .name   = "MMX_SAT_INSTR_EXEC",
  .desc   = "Number of MMX saturating instructions executed",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xb1,
},
{ .name   = "MMX_UOPS_EXEC",
  .desc   = "Number of MMX micro-ops executed",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xb2,
},
{ .name   = "MMX_INSTR_TYPE_EXEC",
  .desc   = "Number of MMX instructions executed by type",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xb3,
  .numasks = LIBPFM_ARRAY_SIZE(pm_mmx_instr_type_exec),
  .ngrp = 1,
  .umasks = pm_mmx_instr_type_exec,
},
{ .name   = "FP_MMX_TRANS",
  .desc   = "Number of MMX transitions",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xcc,
  .numasks = LIBPFM_ARRAY_SIZE(pm_fp_mmx_trans),
  .ngrp = 1,
  .umasks = pm_fp_mmx_trans,
},
{ .name   = "MMX_ASSIST",
  .desc   = "Number of MMX micro-ops executed",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xcd,
},
{ .name   = "SEG_RENAME_STALLS",
  .desc   = "Number of Segment Register Renaming Stalls",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xd4,
  .numasks = LIBPFM_ARRAY_SIZE(pm_seg_rename_stalls),
  .ngrp = 1,
  .umasks = pm_seg_rename_stalls,
},
{ .name   = "SEG_REG_RENAMES",
  .desc   = "Number of Segment Register Renames",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xd5,
  .numasks = LIBPFM_ARRAY_SIZE(pm_seg_rename_stalls),
  .ngrp = 1,
  .umasks = pm_seg_rename_stalls, /* identical to actual umasks list for this event */
},
{ .name   = "RET_SEG_RENAMES",
  .desc   = "Number of segment register rename events retired",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xd6,
},
{ .name   = "EMON_KNI_PREF_DISPATCHED",
  .desc   = "Number of Streaming SIMD extensions prefetch/weakly-ordered instructions dispatched (speculative prefetches are included in counting). Pentium III and later",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x7,
  .numasks = LIBPFM_ARRAY_SIZE(pm_emon_kni_pref_dispatched),
  .ngrp = 1,
  .umasks = pm_emon_kni_pref_dispatched,
},
{ .name   = "EMON_KNI_PREF_MISS",
  .desc   = "Number of prefetch/weakly-ordered instructions that miss all caches. Pentium III and later",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x4b,
  .numasks = LIBPFM_ARRAY_SIZE(pm_emon_kni_pref_dispatched),
  .ngrp = 1,
  .umasks = pm_emon_kni_pref_dispatched, /* identical to actual umasks list for this event */
},
{ .name   = "EMON_EST_TRANS",
  .desc   = "Number of Enhanced Intel SpeedStep technology transitions",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x58,
  .numasks = LIBPFM_ARRAY_SIZE(pm_emon_est_trans),
  .ngrp = 1,
  .umasks = pm_emon_est_trans,
},
{ .name   = "EMON_THERMAL_TRIP",
  .desc   = "Duration/occurrences in thermal trip; to count the number of thermal trips; edge detect must be used",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x59,
},
{ .name   = "BR_INST_EXEC",
  .desc   = "Branch instructions executed (not necessarily retired)",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x88,
},
{ .name   = "BR_MISSP_EXEC",
  .desc   = "Branch instructions executed that were mispredicted at execution",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x89,
},
{ .name   = "BR_BAC_MISSP_EXEC",
  .desc   = "Branch instructions executed that were mispredicted at Front End (BAC)",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x8a,
},
{ .name   = "BR_CND_EXEC",
  .desc   = "Conditional branch instructions executed",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x8b,
},
{ .name   = "BR_CND_MISSP_EXEC",
  .desc   = "Conditional branch instructions executed that were mispredicted",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x8c,
},
{ .name   = "BR_IND_EXEC",
  .desc   = "Indirect branch instructions executed",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x8d,
},
{ .name   = "BR_IND_MISSP_EXEC",
  .desc   = "Indirect branch instructions executed that were mispredicted",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x8e,
},
{ .name   = "BR_RET_EXEC",
  .desc   = "Return branch instructions executed",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x8f,
},
{ .name   = "BR_RET_MISSP_EXEC",
  .desc   = "Return branch instructions executed that were mispredicted at Execution",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x90,
},
{ .name   = "BR_RET_BAC_MISSP_EXEC",
  .desc   = "Return branch instructions executed that were mispredicted at Front End (BAC)",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x91,
},
{ .name   = "BR_CALL_EXEC",
  .desc   = "CALL instructions executed",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x92,
},
{ .name   = "BR_CALL_MISSP_EXEC",
  .desc   = "CALL instructions executed that were mispredicted",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x93,
},
{ .name   = "BR_IND_CALL_EXEC",
  .desc   = "Indirect CALL instructions executed",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x94,
},
{ .name   = "EMON_SIMD_INSTR_RETIRED",
  .desc   = "Number of retired MMX instructions",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xce,
},
{ .name   = "EMON_SYNCH_UOPS",
  .desc   = "Sync micro-ops",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xd3,
},
{ .name   = "EMON_ESP_UOPS",
  .desc   = "Total number of micro-ops",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xd7,
},
{ .name   = "EMON_FUSED_UOPS_RET",
  .desc   = "Total number of micro-ops",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xda,
  .numasks = LIBPFM_ARRAY_SIZE(pm_emon_fused_uops_ret),
  .ngrp = 1,
  .umasks = pm_emon_fused_uops_ret,
},
{ .name   = "EMON_UNFUSION",
  .desc   = "Number of unfusion events in the ROB, happened on a FP exception to a fused micro-op",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xdb,
},
{ .name   = "EMON_PREF_RQSTS_UP",
  .desc   = "Number of upward prefetches issued",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xf0,
},
{ .name   = "EMON_PREF_RQSTS_DN",
  .desc   = "Number of downward prefetches issued",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xf8,
},
{ .name   = "EMON_SSE_SSE2_INST_RETIRED",
  .desc   = "Streaming SIMD extensions instructions retired",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xd8,
  .numasks = LIBPFM_ARRAY_SIZE(pm_emon_sse_sse2_inst_retired),
  .ngrp = 1,
  .umasks = pm_emon_sse_sse2_inst_retired,
},
{ .name   = "EMON_SSE_SSE2_COMP_INST_RETIRED",
  .desc   = "Computational SSE instructions retired",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0xd9,
  .numasks = LIBPFM_ARRAY_SIZE(pm_emon_sse_sse2_inst_retired),
  .ngrp = 1,
  .umasks = pm_emon_sse_sse2_inst_retired, /* identical to actual umasks list for this event */
},
{ .name   = "L2_LD",
  .desc   = "Number of L2 data loads",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x29,
  .numasks = LIBPFM_ARRAY_SIZE(pm_l2_ld),
  .ngrp = 1,
  .umasks = pm_l2_ld,
},
{ .name   = "L2_LINES_IN",
  .desc   = "Number of L2 lines allocated",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x24,
  .numasks = LIBPFM_ARRAY_SIZE(pm_l2_ld),
  .ngrp = 1,
  .umasks = pm_l2_ld, /* identical to actual umasks list for this event */
},
{ .name   = "L2_LINES_OUT",
  .desc   = "Number of L2 lines evicted",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x26,
  .numasks = LIBPFM_ARRAY_SIZE(pm_l2_ld),
  .ngrp = 1,
  .umasks = pm_l2_ld, /* identical to actual umasks list for this event */
},
{ .name   = "L2_M_LINES_OUT",
  .desc   = "Number of L2 M-state lines evicted",
  .modmsk = INTEL_X86_ATTRS,
  .cntmsk = 0x3,
  .code = 0x27,
  .numasks = LIBPFM_ARRAY_SIZE(pm_l2_ld),
  .ngrp = 1,
  .umasks = pm_l2_ld, /* identical to actual umasks list for this event */
},
};
