/**
 * This is a simple example to demonstrate the use of pointer to std::array.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *    g++ -Wall -Werror -std=c++11 std_array_ptr.cpp -o test
 * 
 */

#include <iostream>
#include <array>
#include <string>

int main() {
    std::array<std::string, 3> strArr= {"Good", "Better", "Best"};

    // Create a pointer to the std::array
    // Note: The pointer type must match the array type and size exactly.
    std::array<std::string, 3>* arrayPtr = &strArr;

    std::cout << "--- Initial Values (using pointer) ---\n";
    std::cout << "Element 0: " << arrayPtr->at(0) << "\n";
    // Alternatively, dereference the pointer first, then use operator[]
    // Note: object[] implies operator[] is overloaded for std::array, which allows access to elements.
    std::cout << "Element 1: " << (*arrayPtr)[1] << "\n";
    std::cout << "Element 2: " << (*arrayPtr)[2] << "\n\n";

    // Manipulate the array elements through the pointer
    (*arrayPtr)[0] = "cppreference"; 
    arrayPtr->at(1) = "cppinsights"; 

    std::cout << "--- Modified Values (via original array) ---\n";
    // Printing from the original 'strArr' object to prove it changed
    for (const auto& elem : strArr) {
        std::cout << elem << "\n";
    }

    // Get the size of the array using the pointer
    std::cout << "\nArray size (no. of elements) via pointer: " << arrayPtr->size() << "\n";

    return 0;
}