/**
 * This program demonstrates the use of std::array container in C++. The std::array is a container that 
 * encapsulates fixed size arrays. It is a wrapper around a raw array and provides several member functions 
 * to manipulate the array. The std::array is defined in the <array> header file and is part of the C++11 standard.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 simple_arr_cont.cpp -o test
 */

#include <iostream>
#include <iomanip>
#include <array>

int main() {
    std::array<int, 5> arr; // n is an array of 5 int values
    // initialize elements of array n to 0
    for (size_t i{0}; i < arr.size(); ++i) {
        arr[i] = 0; // set element at location i to 0
    }
    std::cout << "Element" << std::setw(10) << "Value" << std::endl;
    // output each array element's value
    for (size_t j{0}; j < arr.size(); ++j) {
        std::cout << std::setw(5) << j << std::setw(10) << arr[j] << std::endl;
    }
    return 0;
}