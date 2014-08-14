/**************************************************************************/
/*                                                                        */ 
/*MODULE_NAME:DPChange                                                    */
/*                                                                        */
/*FUNCTIONS:Init_Lib                                                      */
/*          Exit_Lib                                                      */
/*                                                                        */
/*  common data & function prototypes                                     */ 
/**************************************************************************/
#ifndef DP
#define DP

/* The floating point mode of the processor is controlled by a control word */
/* and is set to defaults by init routines inserted by the compiler. The    */
/* x86/NT/cl default FP mode is IEEE double. The x86/NT/gcc default is the  */
/* x86 extended double. This version of the      */
/* math lib requires the IEEE double mode, therefore the Init_Lib() and the */
/* Exit_lib() functions for the AIX do nothing.                             */
/* These functions are here for uniformity and compatibility of usage with  */
/* other platforms such as the x86/Linux and  x86/NT.                       */

/* Function returns 0. The return value is meaningless                      */
/* Function is a placeholder for future PowerPC processor FP modes          */

/* Function do nothing ,only return default value 0                    */
/* Function exist only as place holder                                 */
unsigned short Init_Lib();

/* Function do nothing                                                 */
/* Function exist only as place holder                                  */
void Exit_Lib(unsigned short);

#endif /*DP*/
