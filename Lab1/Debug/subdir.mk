################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../FarthestPoint.cpp \
../PointsAndLines.cpp \
../mainTest.cpp \
../point.cpp 

OBJS += \
./FarthestPoint.o \
./PointsAndLines.o \
./mainTest.o \
./point.o 

CPP_DEPS += \
./FarthestPoint.d \
./PointsAndLines.d \
./mainTest.d \
./point.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


