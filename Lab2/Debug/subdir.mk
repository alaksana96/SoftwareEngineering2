################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../FarthestPoint.cpp \
../PointsAndLines.cpp \
../Triangle.cpp \
../TrianglesTest.cpp \
../lab2.cpp \
../mainTest.cpp \
../point.cpp 

OBJS += \
./FarthestPoint.o \
./PointsAndLines.o \
./Triangle.o \
./TrianglesTest.o \
./lab2.o \
./mainTest.o \
./point.o 

CPP_DEPS += \
./FarthestPoint.d \
./PointsAndLines.d \
./Triangle.d \
./TrianglesTest.d \
./lab2.d \
./mainTest.d \
./point.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


