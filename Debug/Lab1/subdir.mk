################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Lab1/mainTest.cpp \
../Lab1/point.cpp 

OBJS += \
./Lab1/mainTest.o \
./Lab1/point.o 

CPP_DEPS += \
./Lab1/mainTest.d \
./Lab1/point.d 


# Each subdirectory must supply rules for building sources it contributes
Lab1/%.o: ../Lab1/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


