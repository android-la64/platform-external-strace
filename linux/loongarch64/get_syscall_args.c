/* Return -1 on error or 1 on success (never 0!). */
static int
get_syscall_args(struct tcb *tcp)
{
	tcp->u_arg[0] = loongarch_regs.a0;
	tcp->u_arg[1] = loongarch_regs.a1;
	tcp->u_arg[2] = loongarch_regs.a2;
	tcp->u_arg[3] = loongarch_regs.a3;
	tcp->u_arg[4] = loongarch_regs.a4;
	tcp->u_arg[5] = loongarch_regs.a5;
	return 1;
}
