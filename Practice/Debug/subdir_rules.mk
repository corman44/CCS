################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
functions.obj: ../functions.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/arm_15.12.2.LTS/bin/armcl" -mv4 --code_state=32 --include_path="C:/ti/ccsv6/tools/compiler/arm_15.12.2.LTS/include" --include_path="C:/ti/ccsv6/ccs_base/msp430/include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="functions.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

main.obj: ../main.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/arm_15.12.2.LTS/bin/armcl" -mv4 --code_state=32 --include_path="C:/ti/ccsv6/tools/compiler/arm_15.12.2.LTS/include" --include_path="C:/ti/ccsv6/ccs_base/msp430/include" -g --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="main.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


