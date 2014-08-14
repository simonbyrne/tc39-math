#include "mathlib_config.h"

#if (MATHLIB_LINUX || MATHLIB_CYGWIN)
#   include "LINUX_endian.h"
#elif MATHLIB_AIX
#    include "AIX_endian.h"
#elif MATHLIB_SUN
#    include "SUN_endian.h"
#elif MATHLIB_BORLANDC
#     include "BCB_endian.h"
#elif MATHLIB_MSVC
#     include "MSVC_endian.h"
#else
#error "Unsupported platform"
#endif
