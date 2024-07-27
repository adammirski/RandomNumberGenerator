/*
 * reverse_digits.cpp
 *
 *  Created on: Jun 7, 2024
 *      Author: adam
 */

#include "hw01.h"

int reverseDigits(int number) {
    int reversed = 0;
    while (number != 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed;
}




