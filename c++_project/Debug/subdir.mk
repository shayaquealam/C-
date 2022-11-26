################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../array.cpp \
../basic.cpp \
../class\ .cpp \
../constructor.cpp \
../encaptulation.cpp \
../inheritnce.cpp \
../main.cpp \
../pointer.cpp \
../polymorphism.cpp 

CPP_DEPS += \
./array.d \
./basic.d \
./class\ .d \
./constructor.d \
./encaptulation.d \
./inheritnce.d \
./main.d \
./pointer.d \
./polymorphism.d 

OBJS += \
./array.o \
./basic.o \
./class\ .o \
./constructor.o \
./encaptulation.o \
./inheritnce.o \
./main.o \
./pointer.o \
./polymorphism.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

class\ .o: ../class\ .cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"class .d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./array.d ./array.o ./basic.d ./basic.o ./class\ .d ./class\ .o ./constructor.d ./constructor.o ./encaptulation.d ./encaptulation.o ./inheritnce.d ./inheritnce.o ./main.d ./main.o ./pointer.d ./pointer.o ./polymorphism.d ./polymorphism.o

.PHONY: clean--2e-

