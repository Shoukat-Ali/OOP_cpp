/**
 * This program demonstrates the use of initializer lists to initialize a std::array in C++. An initializer list is a
 * list of values enclosed in braces {} that can be used to initialize an array.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 initializer_list_arr.cpp -o test
 */

#include <iostream>
#include <iomanip>
#include <array>

int main() {
    std::array<int, 5> n{32, 27, 64, 18, 95}; // list initializer
    
    // constant variable can be used to specify array size
    // const size_t arraySize{5}; // must initialize in declaration
    // std::array<int, arraySize> arr{3, 7, 5, 8, 4}; // list initializer

    std::cout << "Element" << std::setw(10) << "Value" << std::endl;
    
    // output each array element's value
    for (size_t i{0}; i < n.size(); ++i) {
        std::cout << std::setw(5) << i << std::setw(10) << n[i] << std::endl;
    }

    // output each array element's value
    // for (size_t i{0}; i < arr.size(); ++i) {
    //     std::cout << std::setw(5) << i << std::setw(10) << arr[i] << std::endl;
    // }

}