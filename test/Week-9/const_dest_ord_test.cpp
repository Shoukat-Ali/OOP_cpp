/**
 * This example is taken from the textbook to demonstrate the order in which constructor and destructor 
 * are called when an object is created and destroyed. 
 * 
 * Note: Since we are using VS Code IDE, therefore, the use of forward slash (/) for header file path works on Linux and Windows. 
 * Please sure that when you run the above GNU C++ command,  the terminal is set to PowerShell on Windows.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -std=c++11 const_dest_ord_test.cpp ../../src/Week-9/const_dest_ord.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -std=c++11 const_dest_ord_test.cpp -o const_dest_ord_test.o
 *      g++ -c -Wall -std=c++11 ../../src/Week-9/const_dest_ord.cpp -o const_dest_ord.o
 *      g++ const_dest_ord_test.o const_dest_ord.o -o test
 */

#include <iostream>
#include "../../header/Week-9/const_dest_ord.hpp" 

void myFunc(); // prototype

CreateAndDestroy first{1, "(global before main)"}; // global object

int main() {
    std::cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << std::endl;
    CreateAndDestroy second{2, "(local in main)"};
    static CreateAndDestroy third{3, "(local static in main)"};
    
    myFunc(); // call function to create objects
    std::cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << std::endl;
    CreateAndDestroy fourth{4, "(local in main)"};
    std::cout << "\nMAIN FUNCTION: EXECUTION ENDS" << std::endl;
    return 0;
}

// function to create objects
void myFunc() {
    std::cout << "\nMYFUNC FUNCTION: EXECUTION BEGINS" << std::endl;
    CreateAndDestroy fifth{5, "(local in create)"};
    
    static CreateAndDestroy sixth{6, "(local static in create)"};
    CreateAndDestroy seventh{7, "(local in create)"};
    std::cout << "\nMYFUNC FUNCTION: EXECUTION ENDS" << std::endl;
}