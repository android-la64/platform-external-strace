/* Generated by ./xlat/gen.sh from ./xlat/snmp_icmp6_stats.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(ICMP6_MIB_NUM) || (defined(HAVE_DECL_ICMP6_MIB_NUM) && HAVE_DECL_ICMP6_MIB_NUM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ICMP6_MIB_NUM) == (0), "ICMP6_MIB_NUM != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ICMP6_MIB_NUM 0
#endif
#if defined(ICMP6_MIB_INMSGS) || (defined(HAVE_DECL_ICMP6_MIB_INMSGS) && HAVE_DECL_ICMP6_MIB_INMSGS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ICMP6_MIB_INMSGS) == (1), "ICMP6_MIB_INMSGS != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ICMP6_MIB_INMSGS 1
#endif
#if defined(ICMP6_MIB_INERRORS) || (defined(HAVE_DECL_ICMP6_MIB_INERRORS) && HAVE_DECL_ICMP6_MIB_INERRORS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ICMP6_MIB_INERRORS) == (2), "ICMP6_MIB_INERRORS != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ICMP6_MIB_INERRORS 2
#endif
#if defined(ICMP6_MIB_OUTMSGS) || (defined(HAVE_DECL_ICMP6_MIB_OUTMSGS) && HAVE_DECL_ICMP6_MIB_OUTMSGS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ICMP6_MIB_OUTMSGS) == (3), "ICMP6_MIB_OUTMSGS != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ICMP6_MIB_OUTMSGS 3
#endif
#if defined(ICMP6_MIB_OUTERRORS) || (defined(HAVE_DECL_ICMP6_MIB_OUTERRORS) && HAVE_DECL_ICMP6_MIB_OUTERRORS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ICMP6_MIB_OUTERRORS) == (4), "ICMP6_MIB_OUTERRORS != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ICMP6_MIB_OUTERRORS 4
#endif
#if defined(ICMP6_MIB_CSUMERRORS) || (defined(HAVE_DECL_ICMP6_MIB_CSUMERRORS) && HAVE_DECL_ICMP6_MIB_CSUMERRORS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((ICMP6_MIB_CSUMERRORS) == (5), "ICMP6_MIB_CSUMERRORS != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define ICMP6_MIB_CSUMERRORS 5
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat snmp_icmp6_stats in mpers mode

# else

static
const struct xlat snmp_icmp6_stats[] = {
 [ICMP6_MIB_NUM] = XLAT(ICMP6_MIB_NUM),
 [ICMP6_MIB_INMSGS] = XLAT(ICMP6_MIB_INMSGS),
 [ICMP6_MIB_INERRORS] = XLAT(ICMP6_MIB_INERRORS),
 [ICMP6_MIB_OUTMSGS] = XLAT(ICMP6_MIB_OUTMSGS),
 [ICMP6_MIB_OUTERRORS] = XLAT(ICMP6_MIB_OUTERRORS),
 [ICMP6_MIB_CSUMERRORS] = XLAT(ICMP6_MIB_CSUMERRORS),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */