#include "64/syscallent.h"

/* #define __NR_loongarch_hwprobe (__NR_arch_specific_syscall + 14) */
[258] = { 5,	0,		SEN(loongarch_hwprobe),		"loongarch_hwprobe"	},
/* #define __NR_loongarch_flush_icache (__NR_arch_specific_syscall + 15) */
[259] = { 3,	TM,		SEN(loongarch_flush_icache),	"loongarch_flush_icache"	},
