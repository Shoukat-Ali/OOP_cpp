/**
 * This example is taken from the textbook to demonstrate composition/aggregation using 
 * Date class object as data members in the class Employee.
 * 
 * * Note: Since we are using VS Code IDE, therefore, the use of forward slash (/) for header file path works on Linux and Windows. 
 * Please sure that when you run the above GNU C++ command,  the terminal is set to PowerShell on Windows.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 date_employee_compo.cpp ../../src/Week-9/date.cpp ../../src/Week-9/employee.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 date_employee_compo.cpp -o date_employee_compo.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-9/date.cpp -o date.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-9/employee.cpp -o employee.o
 *      g++ date_employee_compo.o date.o employee.o -o test
 */

#include <iostream>
#include "../../header/Week-9/date.hpp"     // Date class definition
#include "../../header/Week-9/employee.hpp" // Employee class definition


int main() {
    Date birth{7, 24, 1949};
    Date hire{3, 12, 1988};
    Employee manager{"Bob", "Blue", birth, hire};
    std::cout << "\n" << manager.toString() << std::endl;
    return 0;
}