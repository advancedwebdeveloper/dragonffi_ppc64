#ifndef DFFI_CONFIG_H
#define DFFI_CONFIG_H

#define HAVE_INT128_T
#define HAVE_COMPLEX_T

/* #undef LLVM_BUILD_DEBUG */

#ifdef HAVE_INT128_T
#define DFFI_SUPPORT_I128
#endif

#ifdef HAVE_COMPLEX_T
#define DFFI_SUPPORT_COMPLEX
#endif

#endif
