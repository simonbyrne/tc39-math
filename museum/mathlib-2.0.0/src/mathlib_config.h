#undef PACKAGE
#undef VERSION

#if defined (_MSC_VER)
# ifndef _MATHLIB_DLL_
#   define _MATHLIB_DLL_ extern __declspec(dllexport)
# endif
# include "mathlib_config_msvc.h"
#else
# ifndef _MATHLIB_DLL_
#   define _MATHLIB_DLL_
# endif
# include "mathlib_configuration.h"
#endif
