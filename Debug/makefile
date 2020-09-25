################################################################################
# Automatically-generated file. Do not edit!
################################################################################

CG_TOOL_ROOT := /home/fabrizio/Downloads/energia-0101E0017/hardware/tools/msp430

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./LockMechCode.o" \
$(GEN_CMDS__FLAG) \
-Wl,--start-group \
-llpmsp430g2553_IRremote \
-llpmsp430g2553_core \
-lm \
-Wl,--end-group \

-include ../makefile.init

RM := rm -rf
RMDIR := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
LockMechCode.out \

EXE_OUTPUTS__QUOTED += \
"LockMechCode.out" \

BIN_OUTPUTS += \
LockMechCode.hex \

BIN_OUTPUTS__QUOTED += \
"LockMechCode.hex" \


# All Target
all: LockMechCode.out secondary-outputs

dependents:
	-cd /home/fabrizio/workspace_v6_1_3/lpmsp430g2553_core/Debug && $(MAKE) clean all
	-cd /home/fabrizio/workspace_v6_1_3/lpmsp430g2553_IRremote/Debug && $(MAKE) clean all

# Tool invocations
LockMechCode.out: $(OBJS) $(GEN_CMDS) /home/fabrizio/workspace_v6_1_3/lpmsp430g2553_core/Debug/liblpmsp430g2553_core.a /home/fabrizio/workspace_v6_1_3/lpmsp430g2553_IRremote/Debug/liblpmsp430g2553_IRremote.a
	@echo 'Building target: $@'
	@echo 'Invoking: GNU Linker'
	"/home/fabrizio/Downloads/energia-0101E0017/hardware/tools/msp430/bin/msp430-gcc" -mmcu=msp430g2553 -DF_CPU=16000000L -DENERGIA=17 -DARDUINO=101 -Os -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -Wall -Wl,-Map,"LockMechCode.map" -Wl,--gc-sections -L"/home/fabrizio/workspace_v6_1_3/lpmsp430g2553_IRremote/Debug" -L"/home/fabrizio/workspace_v6_1_3/lpmsp430g2553_core/Debug" -Wl,--undefined,main -o"LockMechCode.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

LockMechCode.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: GNU Objcopy Utility'
	"/home/fabrizio/Downloads/energia-0101E0017/hardware/tools/msp430/bin/msp430-objcopy" -O ihex --remove-section .eeprom $(EXE_OUTPUTS__QUOTED) "LockMechCode.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)$(BIN_OUTPUTS__QUOTED)
	-$(RM) "LockMechCode.d" 
	-$(RM) "LockMechCode.o" 
	-@echo 'Finished clean'
	-@echo ' '

secondary-outputs: $(BIN_OUTPUTS)

.PHONY: all clean dependents
.SECONDARY:
/home/fabrizio/workspace_v6_1_3/lpmsp430g2553_core/Debug/liblpmsp430g2553_core.a:
/home/fabrizio/workspace_v6_1_3/lpmsp430g2553_IRremote/Debug/liblpmsp430g2553_IRremote.a:

-include ../makefile.targets

