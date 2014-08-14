/****************************************************************************/
/*                                                                          */ 
/*MODULE_NAME:DPChange.c                                                     */
/*                                                                          */
/*FUNCTIONS:Init_Lib                                                        */
/*          Exit_Lib                                                        */
/*                                                                          */
/* Routines are place holders for future use                                */
/* Init_Lib changes the control word to IEEE double precision so that the   */
/* math routines will work properly. It returns the original status         */
/* as unsigned short. The returned value should be handed to Exit_lib       */
/* in order to restore the original status of the control word after the    */
/* math routines are no longer needed                                       */
/****************************************************************************/
#include "DPChange.h"


/* Function do nothing ,only return default value 0                    */
/* Function exist only as place holder                                 */
unsigned short Init_Lib()    
{
  return 0;
}  

/* Function do nothing ,only return default value 0                    */
/* Function exist only as place holder                                 */
void Exit_Lib(unsigned short status) /* function restore the original value of DP */
{ 
  return;
}
