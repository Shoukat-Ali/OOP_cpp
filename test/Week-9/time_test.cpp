/**
 * This example is taken from the textbook to demonstrate the idea of class-implementation programmer and client-code programmer.
 * The program demonstrates class Time that represents time in 24-hour and 12-hour formats. 
 * 
 * Note: Since we are using VS Code IDE, therefore, the use of forward slash (/) for header file path works on Linux and Windows. 
 * Please sure that when you run the above GNU C++ command,  the terminal is set to PowerShell on Windows.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -std=c++11 time_test.cpp ../../src/Week-9/time.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -std=c++11 time_test.cpp -o time_test.o
 *      g++ -c -Wall -std=c++11 ../../src/Week-9/time.cpp -o time.o
 *      g++ time_test.o time.o -o test
 */

#include <iostream>
#include <stdexcept>        // invalid_argument exception class
#include "../../header/Week-9/time.hpp"

// displays a Time in 24-hour and 12-hour formats
void displayTime(const std::string& message, const Time& time) {
    std::cout << message << "\nUniversal time: " << time.toUniversalString()
              << "\nStandard time: " << time.toStandardString() << "\n\n";
}

int main() {
    Time t; // instantiate object t of class Time
    displayTime("Initial time:", t); // display t's initial value
    
    t.setTime(13, 27, 6); // change time
    displayTime("After setTime:", t); // display t's new value
    // attempt to set the time with invalid values
    try {
        t.setTime(99, 99, 99); // all values out of range
    }
    catch (std::invalid_argument& e) {
        std::cout << "Exception: " << e.what() << "\n\n";
    }
    // display t's value after attempting to set an invalid time
    displayTime("After attempting to set an invalid time:", t);
    return 0;
}