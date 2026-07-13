/**
 * This example is taken from the textbook to demonstrate cascaded function calls.
 * 
 * Note: Since we are using VS Code IDE, therefore, the use of forward slash (/) for header file path works on Linux and Windows. 
 * Please sure that when you run the above GNU C++ command,  the terminal is set to PowerShell on Windows.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 test_static_members.cpp ../../src/Week-10/static_members.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 test_static_members.cpp -o test_static_members.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-10/static_members.cpp -o static_members.o
 *      g++ test_static_members.o static_members.o -o test
 */

#include <iostream>
#include "../../header/Week-10/static_members.hpp"

int main() {
    // no objects exist; use class name and binary scope resolution
    // operator to access static member function getCount
    std::cout   << "Number of employees before instantiation of any objects is " 
                << Employee::getCount() << std::endl; // use class name

    // the following scope creates and destroys
    // Employee objects before main terminates
    {
        Employee e1{"Susan", "Baker"};
        Employee e2{"Robert", "Jones"};
        // two objects exist; call static member function getCount again
        // using the class name and the scope resolution operator
        std::cout   << "Number of employees after objects are instantiated is "
                    << Employee::getCount();
        
        std::cout   << "\n\nEmployee 1: "
                    << e1.getFirstName() << " " << e1.getLastName()
                    << "\nEmployee 2: "
                    << e2.getFirstName() << " " << e2.getLastName() << "\n\n";
    }
    // no objects exist, so call static member function getCount again
    // using the class name and the scope resolution operator
    std::cout   << "\nNumber of employees after objects are deleted is "
                << Employee::getCount() << std::endl;
    return 0;
}