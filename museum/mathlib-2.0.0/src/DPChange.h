#include "mathlib_config.h"

#if (MATHLIB_LINUX || MATHLIB_CYGWIN)
#   include "LINUX_DPChange.h"
#elif MATHLIB_AIX
#    include "AIX_DPChange.h"
#elif MATHLIB_SUN
#    include "SUN_DPChange.h"
#elif MATHLIB_BORLANDC
#     include "BCB_DPChange.h"
#elif MATHLIB_MSVC
#     include "MSVC_DPChange.h"
#endif
