/**
 * This is a simple program to demonstrate the difference between static and automatic local arrays in C++.
 * The static local array retains its values between function calls, while the automatic local array is reinitialized 
 * each time the function is called.
 * 
 * To compile and create an executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 static_auto_arr_init.cpp -o test
 */

#include <iostream>
#include <array>

void staticArrayInit(); // function prototype
void automaticArrayInit(); // function prototype
const size_t arraySize{3};

int main() {
    std::cout << "First call to each function:\n";
    staticArrayInit();
    automaticArrayInit();
    std::cout << "\n\nSecond call to each function:\n";
    staticArrayInit();
    automaticArrayInit();
    std::cout << std::endl;
}


// function to demonstrate a static local array
void staticArrayInit(void) {
    // initializes elements to 0 first time function is called
    static std::array<int, arraySize> array1; // static local array
    std::cout << "\nValues on entering staticArrayInit:\n";
    // output contents of array1
    for (size_t i{0}; i < array1.size(); ++i) {
        std::cout << "array1[" << i << "] = " << array1[i] << " ";
    }
    std::cout << "\nValues on exiting staticArrayInit:\n";
    // modify and output contents of array1
    for (size_t j{0}; j < array1.size(); ++j) {
        std::cout << "array1[" << j << "] = " << (array1[j] += 5) << " ";
    }
}

// function to demonstrate an automatic local array
void automaticArrayInit(void) {
    // initializes elements each time function is called
    std::array<int, arraySize> array2{1, 2, 3}; // automatic local array
    std::cout << "\n\nValues on entering automaticArrayInit:\n";
    
    // output contents of array2
    for (size_t i{0}; i < array2.size(); ++i) {
        std::cout << "array2[" << i << "] = " << array2[i] << " ";
    }
    std::cout << "\nValues on exiting automaticArrayInit:\n";
    // modify and output contents of array2
    for (size_t j{0}; j < array2.size(); ++j) {
        std::cout << "array2[" << j << "] = " << (array2[j] += 5) << " ";
    }
}