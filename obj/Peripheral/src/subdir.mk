################################################################################
# MRS Version: {"version":"1.8.5","date":"2023/05/22"}
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Peripheral/src/ch32v30x_adc.c \
../Peripheral/src/ch32v30x_bkp.c \
../Peripheral/src/ch32v30x_can.c \
../Peripheral/src/ch32v30x_crc.c \
../Peripheral/src/ch32v30x_dac.c \
../Peripheral/src/ch32v30x_dbgmcu.c \
../Peripheral/src/ch32v30x_dma.c \
../Peripheral/src/ch32v30x_dvp.c \
../Peripheral/src/ch32v30x_eth.c \
../Peripheral/src/ch32v30x_exti.c \
../Peripheral/src/ch32v30x_flash.c \
../Peripheral/src/ch32v30x_fsmc.c \
../Peripheral/src/ch32v30x_gpio.c \
../Peripheral/src/ch32v30x_i2c.c \
../Peripheral/src/ch32v30x_iwdg.c \
../Peripheral/src/ch32v30x_misc.c \
../Peripheral/src/ch32v30x_opa.c \
../Peripheral/src/ch32v30x_pwr.c \
../Peripheral/src/ch32v30x_rcc.c \
../Peripheral/src/ch32v30x_rng.c \
../Peripheral/src/ch32v30x_rtc.c \
../Peripheral/src/ch32v30x_sdio.c \
../Peripheral/src/ch32v30x_spi.c \
../Peripheral/src/ch32v30x_tim.c \
../Peripheral/src/ch32v30x_usart.c \
../Peripheral/src/ch32v30x_wwdg.c 

OBJS += \
./Peripheral/src/ch32v30x_adc.o \
./Peripheral/src/ch32v30x_bkp.o \
./Peripheral/src/ch32v30x_can.o \
./Peripheral/src/ch32v30x_crc.o \
./Peripheral/src/ch32v30x_dac.o \
./Peripheral/src/ch32v30x_dbgmcu.o \
./Peripheral/src/ch32v30x_dma.o \
./Peripheral/src/ch32v30x_dvp.o \
./Peripheral/src/ch32v30x_eth.o \
./Peripheral/src/ch32v30x_exti.o \
./Peripheral/src/ch32v30x_flash.o \
./Peripheral/src/ch32v30x_fsmc.o \
./Peripheral/src/ch32v30x_gpio.o \
./Peripheral/src/ch32v30x_i2c.o \
./Peripheral/src/ch32v30x_iwdg.o \
./Peripheral/src/ch32v30x_misc.o \
./Peripheral/src/ch32v30x_opa.o \
./Peripheral/src/ch32v30x_pwr.o \
./Peripheral/src/ch32v30x_rcc.o \
./Peripheral/src/ch32v30x_rng.o \
./Peripheral/src/ch32v30x_rtc.o \
./Peripheral/src/ch32v30x_sdio.o \
./Peripheral/src/ch32v30x_spi.o \
./Peripheral/src/ch32v30x_tim.o \
./Peripheral/src/ch32v30x_usart.o \
./Peripheral/src/ch32v30x_wwdg.o 

C_DEPS += \
./Peripheral/src/ch32v30x_adc.d \
./Peripheral/src/ch32v30x_bkp.d \
./Peripheral/src/ch32v30x_can.d \
./Peripheral/src/ch32v30x_crc.d \
./Peripheral/src/ch32v30x_dac.d \
./Peripheral/src/ch32v30x_dbgmcu.d \
./Peripheral/src/ch32v30x_dma.d \
./Peripheral/src/ch32v30x_dvp.d \
./Peripheral/src/ch32v30x_eth.d \
./Peripheral/src/ch32v30x_exti.d \
./Peripheral/src/ch32v30x_flash.d \
./Peripheral/src/ch32v30x_fsmc.d \
./Peripheral/src/ch32v30x_gpio.d \
./Peripheral/src/ch32v30x_i2c.d \
./Peripheral/src/ch32v30x_iwdg.d \
./Peripheral/src/ch32v30x_misc.d \
./Peripheral/src/ch32v30x_opa.d \
./Peripheral/src/ch32v30x_pwr.d \
./Peripheral/src/ch32v30x_rcc.d \
./Peripheral/src/ch32v30x_rng.d \
./Peripheral/src/ch32v30x_rtc.d \
./Peripheral/src/ch32v30x_sdio.d \
./Peripheral/src/ch32v30x_spi.d \
./Peripheral/src/ch32v30x_tim.d \
./Peripheral/src/ch32v30x_usart.d \
./Peripheral/src/ch32v30x_wwdg.d 


# Each subdirectory must supply rules for building sources it contributes
Peripheral/src/ch32v30x_adc.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_adc.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_bkp.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_bkp.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_can.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_can.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_crc.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_crc.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_dac.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_dac.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_dbgmcu.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_dbgmcu.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_dma.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_dma.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_dvp.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_dvp.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_eth.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_eth.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_exti.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_exti.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_flash.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_flash.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_fsmc.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_fsmc.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_gpio.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_gpio.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_i2c.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_i2c.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_iwdg.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_iwdg.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_misc.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_misc.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_opa.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_opa.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_pwr.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_pwr.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_rcc.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_rcc.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_rng.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_rng.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_rtc.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_rtc.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_sdio.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_sdio.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_spi.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_spi.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_tim.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_tim.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_usart.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_usart.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32v30x_wwdg.o: C:/Users/thana/OneDrive/Documents/GitHub/8k-custom-keyboard/Peripheral/src/ch32v30x_wwdg.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

