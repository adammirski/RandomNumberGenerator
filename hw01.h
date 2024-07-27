/*
 * hw01.h
 *
 *  Created on: Jun 8, 2024
 *      Author: adam
 */
// hw01.h
#ifndef HW01_H
#define HW01_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
// Function declarations
int sumDigits(int number);
int tripleNumber(int number);
int reverseDigits(int number);
void sortArray(std::vector<int>& arr);
void printArray(const std::vector<int>& arr);
void saveArray(const std::vector<int>& arr, const std::string& filename);
// Function to print heading information.
void printHeading(std::ostream& os);
#endif // HW01_H
