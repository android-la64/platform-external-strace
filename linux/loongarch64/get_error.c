#include "negated_errno.h"

static void
get_error(struct tcb *tcp, const bool check_errno)
{
	if (check_errno && is_negated_errno(loongarch_regs.a0)) {
		tcp->u_rval = -1;
		tcp->u_error = -loongarch_regs.a0;
	} else {
		tcp->u_rval = loongarch_regs.a0;
	}
}
