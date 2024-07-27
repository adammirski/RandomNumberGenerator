/*
 * sum_digits.cpp
 *
 *  Created on: Jun 7, 2024
 *      Author: adam
 */

#include "hw01.h"

int sumDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}




