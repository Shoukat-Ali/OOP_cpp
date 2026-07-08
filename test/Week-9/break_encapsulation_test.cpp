/**
 * This example is taken from the textbook to demonstrate the danger of breaking encapsulation 
 * by returning a reference to a private data member of a class. 
 * 
 * Note: Since we are using VS Code IDE, therefore, the use of forward slash (/) for header file path works on Linux and Windows. 
 * Please sure that when you run the above GNU C++ command,  the terminal is set to PowerShell on Windows.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -std=c++11 break_encapsulation_test.cpp ../../src/Week-9/break_encapsulation.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -std=c++11 break_encapsulation_test.cpp -o break_encapsulation_test.o
 *      g++ -c -Wall -std=c++11 ../../src/Week-9/break_encapsulation.cpp -o break_encapsulation.o
 *      g++ break_encapsulation_test.o break_encapsulation.o -o test
 */

#include <iostream>
#include "../../header/Week-9/break_encapsulation.hpp"


int main() {
    Time t; // create Time object
    // initialize hourRef with the reference returned by badSetHour
    unsigned int& hourRef{t.badSetHour(20)}; // 20 is a valid hour
    std::cout << "Valid hour before modification: " << hourRef;
    hourRef = 100; // use hourRef to set invalid value in Time object t
    std::cout << "\nInvalid hour after modification: " << t.getHour();
    
    // Dangerous: Function call that returns
    // a reference can be used as an lvalue!
    t.badSetHour(12) = 204; // assign another invalid value to hour
    std::cout   << "\n\n*************************************************\n"
                << "POOR PROGRAMMING PRACTICE!!!!!!!!\n"
                << "t.badSetHour(12) as an lvalue, invalid hour: "
                << t.getHour()
                << "\n*************************************************" << std::endl;
    return 0;
}