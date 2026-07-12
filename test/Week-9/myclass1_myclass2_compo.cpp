/**
 * This is a simple example to demonstrate composition. 
 * In this example, the class MyClass2 contains an object of MyClass1 as a data member. 
 * 
 * Note: Since we are using VS Code IDE, therefore, the use of forward slash (/) for header file path works on Linux and Windows. 
 * Please sure that when you run the above GNU C++ command,  the terminal is set to PowerShell on Windows.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 myclass1_myclass2_compo.cpp ../../src/Week-9/my_class1.cpp ../../src/Week-9/my_class2.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 myclass1_myclass2_compo.cpp -o myclass1_myclass2_compo.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-9/my_class1.cpp -o my_class1.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-9/my_class2.cpp -o my_class2.o
 *      g++ myclass1_myclass2_compo.o my_class1.o my_class2.o -o test
 */

#include <iostream>
#include "../../header/Week-9/my_class1.hpp" // MyClass1 class definition
#include "../../header/Week-9/my_class2.hpp" // MyClass2 class definition

int main() {
    // MyClass1 objmc1(10);
    // MyClass2 objmc2(20, objmc1);
    MyClass2 objmc3;

    // objmc2.display();
    objmc3.display();
    return 0;
}