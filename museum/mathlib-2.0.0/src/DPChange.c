#include "mathlib_config.h"

#if (MATHLIB_LINUX || MATHLIB_CYGWIN)
#   include "LINUX_DPChange.c"
#elif MATHLIB_AIX
#    include "AIX_DPChange.c"
#elif MATHLIB_SUN
#    include "SUN_DPChange.c"
#elif MATHLIB_BORLANDC
#     include "BCB_DPChange.c"
#endif
