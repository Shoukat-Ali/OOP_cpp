/** This is a simple program to demonstrate argument coercion in C++. 
 * To compile and create executable of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 argument_coercion.cpp -o test
 * 
*/
#include <iostream>
#include <iomanip> // for std::setprecision

 
void printInt(int);
void printDouble(double);
// int printInt(int, int);     // Same function signature as the first printInt, will cause a compilation error due to ambiguity

int main() 
{
    double dNum = 3.1234;
    int iNum = 42;
    
    /* Implicit coercion from double to int
    Narrows the double value to an integer, losing the fractional part */
    printInt(dNum);

    /* Implicit coercion from int to double
    Promotes the integer value to a double, adding a decimal point and zeroes */
    printDouble(iNum);

    return 0;
}


void printInt(int value) 
{
    std::cout << "The integer value is: " << value << std::endl;
}

void printDouble(double value) 
{
    std::cout << "The double value is: "  << std::setprecision(2) << std::fixed << value << std::endl;
}

// int printValue(int value) 
// {
//     std::cout << "The integer value is: " << value << std::endl;
// }