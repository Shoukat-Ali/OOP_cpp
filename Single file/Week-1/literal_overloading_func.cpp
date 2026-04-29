/**
 * This a simple program to demonstrate the use of literal overloading in C++ function.
 * To compile and run this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 literal_overloading_func.cpp -o test
 */

#include <iostream>

void foo(double b) {
    std::cout << "Double" << std::endl;
}

void foo(float b) {
    std::cout << "Float" << std::endl;
}


int main()
{
    std::cout << "Calling foo(1.35f)" << std::endl;
    foo(1.35f);
    
}