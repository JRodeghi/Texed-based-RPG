################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Combat/Enemies/Bandit.cpp \
../src/Combat/Enemies/Enemy.cpp 

OBJS += \
./src/Combat/Enemies/Bandit.o \
./src/Combat/Enemies/Enemy.o 

CPP_DEPS += \
./src/Combat/Enemies/Bandit.d \
./src/Combat/Enemies/Enemy.d 


# Each subdirectory must supply rules for building sources it contributes
src/Combat/Enemies/%.o: ../src/Combat/Enemies/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


