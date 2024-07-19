/*
 * epwm.h
 *
 *  Created on: Mar 25, 2024
 *      Author: nov4ou
 */

#ifndef APP_EPWM_EPWM_H_
#define APP_EPWM_EPWM_H_

#include "F2806x_Device.h"          // F2806x Headerfile
#include "F2806x_Examples.h"        // F2806x Examples Headerfile

void EPWM1_Init(Uint16 tbprd);
void EPWM2_Init(Uint16 tbprd);
void EPWM3_Init(Uint16 tbprd);
void EPWM4_Init(Uint16 tbprd);
void EPWM5_Init(Uint16 tbprd);
void EPWM6_Init(Uint16 tbprd);
void EPWM7_Init(Uint16 tbprd);
void EPWM8_Init(Uint16 tbprd);

#endif /* APP_EPWM_EPWM_H_ */
