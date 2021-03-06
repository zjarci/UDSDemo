/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : TJA1043_EN.h
**     Project   : DiagnosticDemo
**     Processor : MC9S12G128VLH
**     Component : BitIO
**     Version   : Component 02.075, Driver 03.16, CPU db: 3.00.017
**     Compiler  : CodeWarrior HC12 C Compiler
**     Date/Time : 2016/10/13, 13:48
**     Abstract  :
**         This component "BitIO" implements an one-bit input/output.
**         It uses one bit/pin of a port.
**         Note: This component is set to work in Output direction only.
**         Methods of this component are mostly implemented as a macros
**         (if supported by target language and compiler).
**     Settings  :
**         Used pin                    :
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       32            |  PT0_IOC0_XIRQ
**             ----------------------------------------------------
**
**         Port name                   : T
**
**         Bit number (in port)        : 0
**         Bit mask of the port        : $0001
**
**         Initial direction           : Output (direction cannot be changed)
**         Initial output value        : 1
**         Initial pull option         : off
**
**         Port data register          : PTT       [$0240]
**         Port control register       : DDRT      [$0242]
**
**         Optimization for            : speed
**     Contents  :
**         GetVal - bool TJA1043_EN_GetVal(void);
**         PutVal - void TJA1043_EN_PutVal(bool Val);
**         ClrVal - void TJA1043_EN_ClrVal(void);
**         SetVal - void TJA1043_EN_SetVal(void);
**
**     Copyright : 1997 - 2011 Freescale Semiconductor, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/

#ifndef TJA1043_EN_H_
#define TJA1043_EN_H_

/* MODULE TJA1043_EN. */

  /* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"

#pragma CODE_SEG TJA1043_EN_CODE
/*
** ===================================================================
**     Method      :  TJA1043_EN_GetVal (component BitIO)
**
**     Description :
**         This method returns an input value.
**           a) direction = Input  : reads the input value from the
**                                   pin and returns it
**           b) direction = Output : returns the last written value
**         Note: This component is set to work in Output direction only.
**     Parameters  : None
**     Returns     :
**         ---             - Input value. Possible values:
**                           FALSE - logical "0" (Low level)
**                           TRUE - logical "1" (High level)

** ===================================================================
*/
#define TJA1043_EN_GetVal() ( \
    (bool)((getReg8(PTT) & 0x01U))     /* Return port data */ \
  )

/*
** ===================================================================
**     Method      :  TJA1043_EN_PutVal (component BitIO)
**
**     Description :
**         This method writes the new output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Val             - Output value. Possible values:
**                           FALSE - logical "0" (Low level)
**                           TRUE - logical "1" (High level)
**     Returns     : Nothing
** ===================================================================
*/
void TJA1043_EN_PutVal(bool Val);

/*
** ===================================================================
**     Method      :  TJA1043_EN_ClrVal (component BitIO)
**
**     Description :
**         This method clears (sets to zero) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#define TJA1043_EN_ClrVal() ( \
    (void)clrReg8Bits(PTT, 0x01U)      /* PTT0=0x00U */ \
  )

/*
** ===================================================================
**     Method      :  TJA1043_EN_SetVal (component BitIO)
**
**     Description :
**         This method sets (sets to one) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#define TJA1043_EN_SetVal() ( \
    (void)setReg8Bits(PTT, 0x01U)      /* PTT0=0x01U */ \
  )

#pragma CODE_SEG DEFAULT

/* END TJA1043_EN. */
#endif /* #ifndef __TJA1043_EN_H_ */
/*
** ###################################################################
**
**     This file was created by Processor Expert 3.05 [04.46]
**     for the Freescale HCS12 series of microcontrollers.
**
** ###################################################################
*/
