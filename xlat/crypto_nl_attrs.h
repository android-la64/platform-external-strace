/* Generated by ./xlat/gen.sh from ./xlat/crypto_nl_attrs.in; do not edit. */
#if !(defined(CRYPTOCFGA_UNSPEC) || (defined(HAVE_DECL_CRYPTOCFGA_UNSPEC) && HAVE_DECL_CRYPTOCFGA_UNSPEC))
# define CRYPTOCFGA_UNSPEC 0
#endif
#if !(defined(CRYPTOCFGA_PRIORITY_VAL) || (defined(HAVE_DECL_CRYPTOCFGA_PRIORITY_VAL) && HAVE_DECL_CRYPTOCFGA_PRIORITY_VAL))
# define CRYPTOCFGA_PRIORITY_VAL 1
#endif
#if !(defined(CRYPTOCFGA_REPORT_LARVAL) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_LARVAL) && HAVE_DECL_CRYPTOCFGA_REPORT_LARVAL))
# define CRYPTOCFGA_REPORT_LARVAL 2
#endif
#if !(defined(CRYPTOCFGA_REPORT_HASH) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_HASH) && HAVE_DECL_CRYPTOCFGA_REPORT_HASH))
# define CRYPTOCFGA_REPORT_HASH 3
#endif
#if !(defined(CRYPTOCFGA_REPORT_BLKCIPHER) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_BLKCIPHER) && HAVE_DECL_CRYPTOCFGA_REPORT_BLKCIPHER))
# define CRYPTOCFGA_REPORT_BLKCIPHER 4
#endif
#if !(defined(CRYPTOCFGA_REPORT_AEAD) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_AEAD) && HAVE_DECL_CRYPTOCFGA_REPORT_AEAD))
# define CRYPTOCFGA_REPORT_AEAD 5
#endif
#if !(defined(CRYPTOCFGA_REPORT_COMPRESS) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_COMPRESS) && HAVE_DECL_CRYPTOCFGA_REPORT_COMPRESS))
# define CRYPTOCFGA_REPORT_COMPRESS 6
#endif
#if !(defined(CRYPTOCFGA_REPORT_RNG) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_RNG) && HAVE_DECL_CRYPTOCFGA_REPORT_RNG))
# define CRYPTOCFGA_REPORT_RNG 7
#endif
#if !(defined(CRYPTOCFGA_REPORT_CIPHER) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_CIPHER) && HAVE_DECL_CRYPTOCFGA_REPORT_CIPHER))
# define CRYPTOCFGA_REPORT_CIPHER 8
#endif
#if !(defined(CRYPTOCFGA_REPORT_AKCIPHER) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_AKCIPHER) && HAVE_DECL_CRYPTOCFGA_REPORT_AKCIPHER))
# define CRYPTOCFGA_REPORT_AKCIPHER 9
#endif
#if !(defined(CRYPTOCFGA_REPORT_KPP) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_KPP) && HAVE_DECL_CRYPTOCFGA_REPORT_KPP))
# define CRYPTOCFGA_REPORT_KPP 10
#endif
#if !(defined(CRYPTOCFGA_REPORT_ACOMP) || (defined(HAVE_DECL_CRYPTOCFGA_REPORT_ACOMP) && HAVE_DECL_CRYPTOCFGA_REPORT_ACOMP))
# define CRYPTOCFGA_REPORT_ACOMP 11
#endif

#ifdef IN_MPERS

# error static const struct xlat crypto_nl_attrs in mpers mode

#else

static
const struct xlat crypto_nl_attrs[] = {
 XLAT(CRYPTOCFGA_UNSPEC),
 XLAT(CRYPTOCFGA_PRIORITY_VAL),
 XLAT(CRYPTOCFGA_REPORT_LARVAL),
 XLAT(CRYPTOCFGA_REPORT_HASH),
 XLAT(CRYPTOCFGA_REPORT_BLKCIPHER),
 XLAT(CRYPTOCFGA_REPORT_AEAD),
 XLAT(CRYPTOCFGA_REPORT_COMPRESS),
 XLAT(CRYPTOCFGA_REPORT_RNG),
 XLAT(CRYPTOCFGA_REPORT_CIPHER),
 XLAT(CRYPTOCFGA_REPORT_AKCIPHER),
 XLAT(CRYPTOCFGA_REPORT_KPP),
 XLAT(CRYPTOCFGA_REPORT_ACOMP),
 XLAT_END
};

#endif /* !IN_MPERS */