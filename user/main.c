/*
 * main.c
 *
 *  Created on: Mar 21, 2024
 *      Author: nov4ou
 */
#include "F2806x_Device.h"   // F2806x Headerfile
#include "F2806x_Examples.h" // F2806x Examples Headerfile
#include "epwm.h"

void LED_Init(void);
void ForceSync();

int main() {
  InitSysCtrl();
  InitPieCtrl();
  IER = 0x0000;
  IFR = 0x0000;
  InitPieVectTable();

  LED_Init();
  EPWM1_Init(4500);
  DELAY_US(5);
  // EPWM2_Init(4500);
  // EPWM3_Init(4500);
  // EPWM4_Init(4500);
  // EPWM5_Init(4500);
  // EPWM6_Init(4500);
  // EPWM7_Init(4500);
  EPWM8_Init(4500);
  ForceSync();

  //
  while (1) {
  }
}

void LED_Init(void) {
  EALLOW;
  GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 0;
  GpioCtrlRegs.GPADIR.bit.GPIO0 = 1;
  GpioCtrlRegs.GPAPUD.bit.GPIO0 = 0;
  GpioDataRegs.GPASET.bit.GPIO0 = 1;
  EDIS;
}

void ForceSync() {
  EPwm1Regs.TBCTL.bit.SWFSYNC = 1; // Master
}
