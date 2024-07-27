/*
 * print_array.cpp
 *
 *  Created on: Jun 7, 2024
 *      Author: adam
 */
/**********************************************************
* AUTHOR         : Adam Mirski
* STUDENT ID     : 584507
* LAB: # HM01    : Random Number Generator
* CLASS          : CS1B
* SECTION        : MTWTH: 3:00p - 5:30p
* DUE DATE       : Jun 8, 2024
**********************************************************/

/*********************************************************
*
*   Print Array
*
*---------------------------------------------------------
*
* This function takes a vector of integers as input and
* prints each element of the vector, separated by a space.
*
**********************************************************/

#include "hw01.h"

void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << ' ';
    }
    std::cout << std::endl;
}





