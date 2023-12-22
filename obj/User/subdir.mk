################################################################################
# MRS Version: {"version":"1.8.5","date":"2023/05/22"}
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User/ch32v30x_it.c \
../User/ch32v30x_usbhs_device.c \
../User/layout.c \
../User/main.c \
../User/system_ch32v30x.c \
../User/usbd_compostie_km.c \
../User/usbd_desc.c 

OBJS += \
./User/ch32v30x_it.o \
./User/ch32v30x_usbhs_device.o \
./User/layout.o \
./User/main.o \
./User/system_ch32v30x.o \
./User/usbd_compostie_km.o \
./User/usbd_desc.o 

C_DEPS += \
./User/ch32v30x_it.d \
./User/ch32v30x_usbhs_device.d \
./User/layout.d \
./User/main.d \
./User/system_ch32v30x.d \
./User/usbd_compostie_km.d \
./User/usbd_desc.d 


# Each subdirectory must supply rules for building sources it contributes
User/%.o: ../User/%.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -mno-save-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized  -g -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Debug" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Core" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\User" -I"C:\Users\thana\OneDrive\Documents\GitHub\8k-custom-keyboard\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

