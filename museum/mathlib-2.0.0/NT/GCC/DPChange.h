/**************************************************************************/
/*                                                                        */ 
/*MODULE_NAME:DPChange                                                    */
/*                                                                        */
/*FUNCTIONS:SetDP                                                         */
/*         restore                                                        */
/*                                                                        */
/*  common data & function prototypes                                     */ 
/**************************************************************************/
#ifndef DP
#define DP
/* Round Control    : bits 10 and 11  */                  
/* Precision Control: bits 8 and 9    */


/* Clear Round control and precision mode */
#define MaskClearDP 0xfcff  /*Binary   1111000011111111 */

/* Set Precision to double and round control to nearest or even */
#define MaskSetDP   0x0200  /* Binary  0000001000000000 */

/* Clear all bits except Round ontrol and precision mode */
#define MaskDP      0x0300  /* Binary  0000111100000000 */


/* Function change precision cotrol to double and round mode to nearest  */
/* or even.Function return unsigned short between 0 and 15 that indicate */
/* what was round control and precision mde before change                */
/* Two LSB bits its precision mode next two rond control                 */
unsigned short Init_Lib();

/* Function receive unsigned short .If it more than 15 print to stdout */
/* error and change nothing.Otherwise change precision control and     */
/* round mode                                                          */
void Exit_Lib(unsigned short);
#endif /*DP*/
