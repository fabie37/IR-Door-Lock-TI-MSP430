################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
LockMechCode.cpp: ../LockMechCode.ino
	@echo 'Building file: $<'
	@echo 'Invoking: Resource Custom Build Step'
	
	@echo 'Finished building: $<'
	@echo ' '

%.o: ./%.cpp $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Compiler'
	"/home/fabrizio/Downloads/energia-0101E0017/hardware/tools/msp430/bin/msp430-gcc" -c -mmcu=msp430g2553 -DF_CPU=16000000L -DENERGIA=17 -DARDUINO=101 -I"/home/fabrizio/Downloads/energia-0101E0017/hardware/msp430/variants/launchpad" -I"/home/fabrizio/Downloads/energia-0101E0017/hardware/msp430/cores/msp430" -I"/home/fabrizio/workspace_v6_1_3/LockMechCode" -I"/home/fabrizio/Downloads/energia-0101E0017/hardware/msp430/libraries/IRremote" -I"/home/fabrizio/Downloads/energia-0101E0017/hardware/tools/msp430/msp430/include" -Os -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o"$@" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: $<'
	@echo ' '


