/**
 * This case study (program) is taken from the textbook to demonstrate operator overloading.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 array_case_study_test.cpp ../../src/Week-11/array_case_study.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 array_case_study_test.cpp -o array_case_study_test.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-11/array_case_study.cpp -o array_case_study.o
 *      g++ array_case_study_test.o array_case_study.o -o test
 * 
 */

#include <iostream>
#include <stdexcept>
#include "../../header/Week-11/array_case_study.hpp"

int main() {
    MyArray integers1{7}; // seven-element MyArray
    MyArray integers2; // 10-element MyArray by default
    // print integers1 size and contents
    std::cout   << "Size of MyArray integers1 is " << integers1.getSize()
                << "\nMyArray after initialization: " << integers1;
    // print integers2 size and contents
    std::cout   << "\nSize of MyArray integers2 is " << integers2.getSize()
                << "\nMyArray after initialization: " << integers2;
    // input and print integers1 and integers2
    std::cout << "\nEnter 17 integers:" << std::endl;
    std::cin >> integers1 >> integers2;
    std::cout   << "\nAfter input, the MyArrays contain:\n"
                << "integers1: " << integers1 << "integers2: " << integers2;
    // use overloaded inequality (!=) operator
    std::cout << "\nEvaluating: integers1 != integers2" << std::endl;
    if (integers1 != integers2) {
        std::cout << "integers1 and integers2 are not equal" << std::endl;
    }
    // create MyArray integers3 using integers1 as an
    // initializer; print size and contents
    MyArray integers3{integers1}; // invokes copy constructor
    std::cout   << "\nSize of MyArray integers3 is " << integers3.getSize()
                << "\nMyArray after initialization: " << integers3;
    // use overloaded assignment (=) operator
    std::cout << "\nAssigning integers2 to integers1:" << std::endl;
    integers1 = integers2; // note target MyArray is smaller
    std::cout << "integers1: " << integers1 << "integers2: " << integers2;
    // use overloaded equality (==) operator
    std::cout << "\nEvaluating: integers1 == integers2" << std::endl;
    if (integers1 == integers2) {
        std::cout << "integers1 and integers2 are equal" << std::endl;
    }
    // use overloaded subscript operator to create rvalue
    std::cout << "\nintegers1[5] is " << integers1[5];
    // use overloaded subscript operator to create lvalue
    std::cout << "\n\nAssigning 1000 to integers1[5]" << std::endl;
    integers1[5] = 1000;
    std::cout << "integers1: " << integers1;
    // attempt to use out-of-range subscript
    try {
        std::cout << "\nAttempt to assign 1000 to integers1[15]" << std::endl;
        integers1[15] = 1000; // ERROR: subscript out of range
    }
    catch (std::out_of_range& e) {
        std::cout << "An exception occurred: " << e.what() << std::endl;
    }
    return 0;
}