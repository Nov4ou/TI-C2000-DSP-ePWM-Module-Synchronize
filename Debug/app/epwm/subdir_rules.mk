################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
app/epwm/epwm.obj: ../app/epwm/epwm.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"/Applications/ti/ccstheia140/ccs/tools/compiler/ti-cgt-c2000_22.6.1A23259/bin/cl2000" -v28 -ml -mt --cla_support=cla0 --float_support=fpu32 --vcu_support=vcu0 --include_path="/Users/nov4ou/workspace_v12/Examples/ePWM_Sync/TI-C2000-DSP-ePWM-Module-Synchronize" --include_path="/Users/nov4ou/workspace_v12/f2806x/headers/include" --include_path="/Users/nov4ou/workspace_v12/f2806x/common/include" --include_path="/Applications/ti/ccstheia140/ccs/tools/compiler/ti-cgt-c2000_22.6.1A23259/include" --include_path="/Users/nov4ou/workspace_v12/Examples/ePWM_Sync/TI-C2000-DSP-ePWM-Module-Synchronize/app/epwm" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="app/epwm/$(basename $(<F)).d_raw" --obj_directory="app/epwm" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


