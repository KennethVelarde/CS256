################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Arrays.c \
../If-elseif-else.c \
../Ternaryoperator.c \
../create-writeToFile.c \
../data1.c \
../data2.c \
../data3.c \
../pointerToStruct.c \
../pointers.c \
../printInputInt.c \
../readBinaryFile.c \
../scanf-printf.c \
../stringReadWrite.c \
../struct.c \
../structAsFunction.c \
../swap.c \
../switch.c \
../variables.c 

OBJS += \
./Arrays.o \
./If-elseif-else.o \
./Ternaryoperator.o \
./create-writeToFile.o \
./data1.o \
./data2.o \
./data3.o \
./pointerToStruct.o \
./pointers.o \
./printInputInt.o \
./readBinaryFile.o \
./scanf-printf.o \
./stringReadWrite.o \
./struct.o \
./structAsFunction.o \
./swap.o \
./switch.o \
./variables.o 

C_DEPS += \
./Arrays.d \
./If-elseif-else.d \
./Ternaryoperator.d \
./create-writeToFile.d \
./data1.d \
./data2.d \
./data3.d \
./pointerToStruct.d \
./pointers.d \
./printInputInt.d \
./readBinaryFile.d \
./scanf-printf.d \
./stringReadWrite.d \
./struct.d \
./structAsFunction.d \
./swap.d \
./switch.d \
./variables.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


