################################################################################
# MRS Version: {"version":"1.8.5","date":"2023/05/22"}
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include User/subdir.mk
-include Startup/subdir.mk
-include Peripheral/src/subdir.mk
-include Debug/subdir.mk
-include Core/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
SKB1_BIN.bin \

SECONDARY_LIST += \
SKB1_BIN.lst \

SECONDARY_SIZE += \
SKB1_BIN.siz \


# All Target
all: SKB1_BIN.elf secondary-outputs

# Tool invocations
SKB1_BIN.elf: $(OBJS) $(USER_OBJS)
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -T "C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\LD\Link.ld" -nostartfiles -Xlinker --gc-sections -Wl,-Map,"SKB1_BIN.map" --specs=nano.specs --specs=nosys.specs -o "SKB1_BIN.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@	@
SKB1_BIN.bin: SKB1_BIN.elf
	@	riscv-none-embed-objcopy -O binary "SKB1_BIN.elf"  "SKB1_BIN.bin"
	@	@
SKB1_BIN.lst: SKB1_BIN.elf
	@	riscv-none-embed-objdump --all-headers --demangle --disassemble "SKB1_BIN.elf" > "SKB1_BIN.lst"
	@	@
SKB1_BIN.siz: SKB1_BIN.elf
	@	riscv-none-embed-size --format=berkeley "SKB1_BIN.elf"
	@	@
# Other Targets
clean:
	-$(RM) $(ASM_UPPER_DEPS)$(OBJS)$(SECONDARY_FLASH)$(SECONDARY_LIST)$(SECONDARY_SIZE)$(ASM_DEPS)$(S_DEPS)$(S_UPPER_DEPS)$(C_DEPS) SKB1_BIN.elf
	-@
secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_LIST) $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
