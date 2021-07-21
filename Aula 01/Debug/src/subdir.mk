################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Aula\ 01.cpp 

OBJS += \
./src/Aula\ 01.o 

CPP_DEPS += \
./src/Aula\ 01.d 


# Each subdirectory must supply rules for building sources it contributes
src/Aula\ 01.o: ../src/Aula\ 01.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Aula 01.d" -MT"src/Aula\ 01.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


