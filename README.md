# ePWM Synchronization Experiment

This repository contains code for an experiment with ePWM modules on the TI C2000 TMS320F28069. The experiment involves configuring multiple ePWM modules with and without synchronization.

## Branches

The repository has two branches:

- **main**: Contains the code with ePWM synchronization implemented.
- **No_Sync**: Contains the code without ePWM synchronization.

## Overview

### Key Functions
- EPWM1_Init(): Initializes ePWM1 as the master.
- EPWM8_Init(): Initializes ePWM8 as a slave.
- DELAY_US(5): Initializes ePWMs at different time.
- ForceSync(): Forces synchronization using software.

### No_Sync Branch
View the EPWM8_Init() function on epwm.c file.
Set these two registers to disable sync:
``` C
EPwm8Regs.TBCTL.bit.SYNCOSEL = TB_SYNC_DISABLE; // Use sync input

EPwm8Regs.TBCTL.bit.PHSEN = TB_DISABLE;
```