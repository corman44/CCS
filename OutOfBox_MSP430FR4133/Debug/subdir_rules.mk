################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
StopWatchMode.obj: ../StopWatchMode.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv6/tools/compiler/msp430_15.12.2.LTS/bin/cl430" -vmspx --use_hw_mpy=none --include_path="C:/ti/ccsv6/ccs_base/msp430/include" --include_path="C:/Users/coryj/Documents/GitHub/CCS/OutOfBox_MSP430FR4133/driverlib/MSP430FR2xx_4xx" --include_path="C:/ti/ccsv6/tools/compiler/msp430_15.12.2.LTS/include" --advice:power="all" --advice:hw_config=all -g --define=__MSP430FR4133__ --display_error_number --diag_warning=225 --diag_wrap=off --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --printf_support=minimal --preproc_with_compile --preproc_dependency="StopWatchMode.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

TempSensorMode.obj: ../TempSensorMode.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv6/tools/compiler/msp430_15.12.2.LTS/bin/cl430" -vmspx --use_hw_mpy=none --include_path="C:/ti/ccsv6/ccs_base/msp430/include" --include_path="C:/Users/coryj/Documents/GitHub/CCS/OutOfBox_MSP430FR4133/driverlib/MSP430FR2xx_4xx" --include_path="C:/ti/ccsv6/tools/compiler/msp430_15.12.2.LTS/include" --advice:power="all" --advice:hw_config=all -g --define=__MSP430FR4133__ --display_error_number --diag_warning=225 --diag_wrap=off --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --printf_support=minimal --preproc_with_compile --preproc_dependency="TempSensorMode.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

hal_LCD.obj: ../hal_LCD.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv6/tools/compiler/msp430_15.12.2.LTS/bin/cl430" -vmspx --use_hw_mpy=none --include_path="C:/ti/ccsv6/ccs_base/msp430/include" --include_path="C:/Users/coryj/Documents/GitHub/CCS/OutOfBox_MSP430FR4133/driverlib/MSP430FR2xx_4xx" --include_path="C:/ti/ccsv6/tools/compiler/msp430_15.12.2.LTS/include" --advice:power="all" --advice:hw_config=all -g --define=__MSP430FR4133__ --display_error_number --diag_warning=225 --diag_wrap=off --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --printf_support=minimal --preproc_with_compile --preproc_dependency="hal_LCD.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

main.obj: ../main.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv6/tools/compiler/msp430_15.12.2.LTS/bin/cl430" -vmspx --use_hw_mpy=none --include_path="C:/ti/ccsv6/ccs_base/msp430/include" --include_path="C:/Users/coryj/Documents/GitHub/CCS/OutOfBox_MSP430FR4133/driverlib/MSP430FR2xx_4xx" --include_path="C:/ti/ccsv6/tools/compiler/msp430_15.12.2.LTS/include" --advice:power="all" --advice:hw_config=all -g --define=__MSP430FR4133__ --display_error_number --diag_warning=225 --diag_wrap=off --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --printf_support=minimal --preproc_with_compile --preproc_dependency="main.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


