/**
 * This example is taken from the textbook to demonstrate the idea of class-implementation programmer and client-code programmer.
 * The program demonstrates class Time that represents time in 24-hour and 12-hour formats. 
 * 
 * Note: Since we are using VS Code IDE, therefore, the use of forward slash (/) for header file path works on Linux and Windows. 
 * Please sure that when you run the above GNU C++ command,  the terminal is set to PowerShell on Windows.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -std=c++11 time_default_arg_test.cpp ../../src/Week-9/time_default_arg.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -std=c++11 time_default_arg_test.cpp -o time_default_arg_test.o
 *      g++ -c -Wall -std=c++11 ../../src/Week-9/time_default_arg.cpp -o time_default_arg.o
 *      g++ time_default_arg_test.o time_default_arg.o -o test
 */

#include <iostream>
#include <stdexcept>
#include "../../header/Week-9/time_default_arg.hpp"

// displays a Time in 24-hour and 12-hour formats
void displayTime(const std::string& message, const Time& time) {
    std::cout << message << "\nUniversal time: " << time.toUniversalString()
              << "\nStandard time: " << time.toStandardString() << "\n\n";
}

int main() {
    Time t1; // all arguments defaulted
    Time t2{2}; // hour specified; minute and second defaulted
    Time t3{21, 34}; // hour and minute specified; second defaulted
    Time t4{12, 25, 42}; // hour, minute and second specified
    
    std::cout << "Constructed with:\n\n";
    displayTime("t1: all arguments defaulted", t1);
    displayTime("t2: hour specified; minute and second defaulted", t2);
    displayTime("t3: hour and minute specified; second defaulted", t3);
    displayTime("t4: hour, minute and second specified", t4);
    
    // attempt to initialize t5 with invalid values
    try {
        Time t1{27, 74, 99}; // all bad values specified
    }
    catch (std::invalid_argument& e) {
        std::cerr << "Exception while initializing t1: " << e.what() << std::endl;
    }

    displayTime("After Exception, t1: hour, minute and second specified", t1);
    return 0;
}