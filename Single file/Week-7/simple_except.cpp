/**
 * This is an attempt to demonstrate a simple exception handling for invalid argument when a function is called.
 * 
 * To compile and create and executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 simple_except.cpp -o test
 *
 */

#include <iostream>
#include <stdexcept>

unsigned long long factorial(int n)
{
    if (n < 0)
        throw std::invalid_argument("Negative number");

    unsigned long long result{1};
    for (int i{1}; i <= n; ++i)
        result *= i;

    return result;
}

int main()
{
    try
    {
        std::cout << factorial(-5) << std::endl;
        std::cout << factorial(13) << std::endl;
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << "Error: " << e.what() << '\n';
    }
}