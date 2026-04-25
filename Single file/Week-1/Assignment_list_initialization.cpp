/**
 * This a simple program to demonstrate the use of list initialization and 
 * assignment operator in C++.
 * To compile and run this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 Assignment_list_initialization.cpp -o test
 */

#include <iostream>

int main() 
{
    /* Using list initialization to initialize variables
    It was introduced in C++11 and is also known as uniform initialization. 
    It uses curly braces {} to initialize variables.
    */ 
    int a{10}; // Initializes 'a' with 10
    //int b{3.14}; // Error: narrowing conversion from double to int
    
    // Using Assignment initialization to initialize variables
    int A = 10; // Initializes 'a' with 10
    int B = 3.14; // Initializes 'b' with 3 data loss
    
    // Output the initialized variables
    std::cout << "Integer a: " << a <<std::endl;

    // std::cout << "Integer b: " << b << std::endl;

    // Output the initialized variables
    std::cout << "Integer A: " << A << std::endl;
    std::cout << "Integer B: " << B << std::endl;

    return 0;   
}