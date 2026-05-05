/**
 * This is an attempt to demonstrate the use of the ternary operator in C++. 
 * The ternary operator is a compact way to write an if-else statement. 
 * It has the form: condition ? expression_if_true : expression_if_false
 * To compile and create executable of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 ternary.cpp -o test 
 */
#include <iostream>

int main() 
{
    int x{10};
    int y{5};

    // Ternary operator is a compact way to write an if-else statement.
    // It has the form: condition ? expression_if_true : expression_if_false
    std::cout << ((y > 15) ? ("A\n") : ("B\n"));
    std::cout << ((x > 5) ? "C\n": "D\n");

    return 0;
}