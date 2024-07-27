/*
 * h01.cpp
 *
 *  Created on: Jun 7, 2024
 *      Author: adam
 */
// hw01.cpp
#include "hw01.h"

enum Operation {
    SUM_DIGITS,
    TRIPLE_NUMBER,
    REVERSE_DIGITS
};

using std::string;
using std::vector;

int main() {
    printHeading(std::cout);
	std::srand(std::time(0));
    vector<int> numbers(10);

    // Generate and store 10 random three-digit numbers
    for (int& num : numbers) {
        num = std::rand() % 900 + 100;
    }

    // Perform operations on the first number
    int number = numbers[0];
    std::cout << "Original number: " << number << std::endl << std::endl;
    std::cout << "Sum of digits: " << sumDigits(number) << std::endl << std::endl;
    std::cout << "Triple number: " << tripleNumber(number) << std::endl << std::endl;
    std::cout << "Reversed digits: " << reverseDigits(number) << std::endl << std::endl;

    // Sort, print, and save the array
    sortArray(numbers);
    printArray(numbers);
    saveArray(numbers, "array.txt");

    return 0;
}




