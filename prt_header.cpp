/*
 * prt_header.cpp
 *
 *  Created on: Jun 8, 2024
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
*   Random Number Generator
*
*---------------------------------------------------------
*
* This C++ program generates a three-digit random number and
* allows the user to perform various operations on it, such as
* summing the digits, tripling the number, and reversing the digits.
* Additionally, the program generates an array of 10 random
* three-digit numbers, sorts them, prints them, and saves them
* to a file.
*
**********************************************************/




#include "hw01.h"
#include <iostream>
#include <iomanip>
// Prints a heading to the provided output stream (can be console or file)
void printHeading(std::ostream& os) {

	const char PROGRAMMER[30] = "Adam Mirski";
    const char CLASS[5] = "CS1C";
    const char SECTION[25] = "MTWTh: 3:00p - 5:30p";
    const char LAB_NUM[5] = "HW01";
    const char LAB_NAME[50] = "Random number generator";


    os << std::left;
    os << "**************************************************";
    os << "\n* PROGRAMMED BY : " << PROGRAMMER;
    os << "\n* " << std::setw(14) << "CLASS" << ": " << CLASS;
    os << "\n* " << std::setw(14) << "SECTION" << ": " << SECTION;
    os << "\n* " << "LAB#" << std::setw(10) << LAB_NUM << ": " << LAB_NAME;
    os << "\n**************************************************\n\n";
    os << std::right;
}






