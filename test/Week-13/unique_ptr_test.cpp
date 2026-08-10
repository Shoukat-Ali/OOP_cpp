/**
 * The example is take from the textbook and modified according to our needs.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 unique_ptr_test.cpp ../../src/Week-13/unique_ptr.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 unique_ptr_test.cpp -o unique_ptr_test.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-13/unique_ptr.cpp -o unique_ptr.o
 *      g++ unique_ptr_test.o unique_ptr.o -o test
 *
 */

#include <iostream>
#include <memory>
#include "../../header/Week-13/unique_ptr.hpp"

int main() {
    std::cout << "Creating a unique_ptr object that points to an MyInteger\n";
    // "aim" unique_ptr at MyInteger object
    std::unique_ptr<MyInteger> ptrToMyInteger{new MyInteger(7)};
    // std::unique_ptr<MyInteger> ptrToMyInteger{std::make_unique<MyInteger>(7)};
    std::cout << "\nUsing the unique_ptr to set the MyInteger\n";
    ptrToMyInteger->setMyInteger(99); // use unique_ptr to set MyInteger value
    // use unique_ptr to get MyInteger value
    std::cout   << "MyInteger after setMyInteger: " << (*ptrToMyInteger).getMyInteger()
                << "\n\nTerminating program" << std::endl;
    return 0;
}