/**
 * This example is taken from the textbook to demonstrate cascaded function calls.
 * 
 * Note: Since we are using VS Code IDE, therefore, the use of forward slash (/) for header file path works on Linux and Windows. 
 * Please sure that when you run the above GNU C++ command,  the terminal is set to PowerShell on Windows.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 test_cascade_func_call.cpp ../../src/Week-10/cascade_func_call.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 test_cascade_func_call.cpp -o test_cascade_func_call.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-10/cascade_func_call.cpp -o cascade_func_call.o
 *      g++ test_cascade_func_call.o cascade_func_call.o -o test
 */

#include <iostream>
#include "../../header/Week-10/cascade_func_call.hpp"

int main() {
    Time t; // create Time object
    t.setHour(18).setMinute(30).setSecond(22); // cascaded function calls
    // output time in universal and standard formats
    std::cout << "Universal time: " << t.toUniversalString()
              << "\nStandard time: " << t.toStandardString();
    // cascaded function calls
    std::cout << "\n\nNew standard time: "
              << t.setTime(20, 20, 20).toStandardString() << std::endl;
    return 0;
}