static int
arch_set_scno(struct tcb *tcp, kernel_ulong_t scno)
{
	loongarch_regs.a7 = scno;
	return set_regs(tcp->pid);
}
