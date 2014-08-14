/****************************************************************************/
/*                                                                          */ 
/*MODULE_NAME:DPChange                                                      */
/*                                                                          */
/*FUNCTIONS:Init_Lib                                                        */
/*          Exit_Lib                                                        */
/*                                                                          */
/*Change Control Word for proper work of program. Change Precision Control  */
/* and Round Control and return original status (unsigned short) of this    */
/*flags. Restore Function receive original status of flags and restore them */
/* in Control Word                                                          */
/****************************************************************************/
#include "DPChange.h"


unsigned  short OrgDPStatus=0;
unsigned  short NewDPStatus=0;


unsigned short Init_Lib()    /*function change value of DP  */
{
 unsigned short tempStatus;
 asm("fstcw _OrgDPStatus");
  tempStatus= OrgDPStatus & MaskClearDP;
   OrgDPStatus= OrgDPStatus & MaskDP;
   OrgDPStatus= OrgDPStatus >>8  ;
   NewDPStatus=tempStatus | MaskSetDP; 
 asm ("fldcw _NewDPStatus" );
  return OrgDPStatus;
}  

//
void Exit_Lib(unsigned short status) /* function restore the original value of DP */
{ if (status>15)  /*unsigned always bigger then zero */
           {printf("input error status"); return;}  
  asm("fstcw _NewDPStatus");
  status=status<<8;
  NewDPStatus= NewDPStatus & MaskClearDP;
  OrgDPStatus=status | NewDPStatus;
  asm("fldcw _OrgDPStatus");
  return;
}
