/**
 * This a simple program to demonstrate the use of cin and cout in C++.
 * To compile and run this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 simple_cin_cout.cpp -o test
 */

#include <iostream>

int main() 
{
    // declaring and initializing variables
    int number1{0}; // first integer to add (initialized to 0)
    int number2{0}; // second integer to add (initialized to 0)
    
    if (-1) {
        std::cout << "Condition is alwaystrue" << std::endl;
    }
    std::cout << "Enter first integer: "; // prompt user for data
    std::cin >> number1; // read first integer from user into number1
    std::cout << "Enter second integer: "; // prompt user for data
    std::cin >> number2; // read second integer from user into number2
    
    std::cout << "Sum is " << number1 + number2 << std::endl; // display sum; end line
}