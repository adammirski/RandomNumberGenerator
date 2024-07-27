################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../h01.cpp \
../print_array.cpp \
../prt_header.cpp \
../reverse_digits.cpp \
../save_array.cpp \
../sort_array.cpp \
../sum_digits.cpp \
../triple_number.cpp 

CPP_DEPS += \
./h01.d \
./print_array.d \
./prt_header.d \
./reverse_digits.d \
./save_array.d \
./sort_array.d \
./sum_digits.d \
./triple_number.d 

OBJS += \
./h01.o \
./print_array.o \
./prt_header.o \
./reverse_digits.o \
./save_array.o \
./sort_array.o \
./sum_digits.o \
./triple_number.o 


# Each subdirectory must supply rules for building sources it contributes
h01.o: ../h01.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	/usr/bin/g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

%.o: ../%.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./h01.d ./h01.o ./print_array.d ./print_array.o ./prt_header.d ./prt_header.o ./reverse_digits.d ./reverse_digits.o ./save_array.d ./save_array.o ./sort_array.d ./sort_array.o ./sum_digits.d ./sum_digits.o ./triple_number.d ./triple_number.o

.PHONY: clean--2e-

