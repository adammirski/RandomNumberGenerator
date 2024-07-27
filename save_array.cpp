/*
 * save_array.cpp
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
* DUE DATE       : Jun 11, 2024
**********************************************************/

/*********************************************************
*
*   Save Array
*
*---------------------------------------------------------
*
* This function takes a vector of integers as input.
* It writes each element of the vector to the specified
* file, separated by a space.
*
**********************************************************/

#include "hw01.h"

void saveArray(const std::vector<int>& arr, const std::string& filename) {
    std::ofstream outFile(filename);
    for (int num : arr) {
        outFile << num << ' ';
    }
    outFile << std::endl;
    outFile.close();
}
