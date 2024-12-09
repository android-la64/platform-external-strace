static struct user_regs_struct loongarch_regs;
unsigned long *const loongarch_sp_ptr = &loongarch_regs.sp;
#define ARCH_REGS_FOR_GETREGSET loongarch_regs
#define ARCH_PC_REG loongarch_regs.pc
