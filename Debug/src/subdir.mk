################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Items.cpp \
../src/Player.cpp \
../src/Text\ Adventure.cpp 

OBJS += \
./src/Items.o \
./src/Player.o \
./src/Text\ Adventure.o 

CPP_DEPS += \
./src/Items.d \
./src/Player.d \
./src/Text\ Adventure.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Text\ Adventure.o: ../src/Text\ Adventure.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -pthread -MMD -MP -MF"src/Text Adventure.d" -MT"src/Text\ Adventure.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


