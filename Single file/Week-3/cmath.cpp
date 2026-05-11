/** 
 * This is a simple program to show some of the functions available in the cmath library. 
 * To compile and create executable of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 cmath.cpp -o test
 */

#include <iostream>
#include <cmath>



int main() 
{
    double num1{9.0}, num2{3.0};
    using std::cout; 
    using std::endl;
     
    cout << "The square root of " << num1 << " is:: " << sqrt(num1) << endl;
    
    num1 = 9.3;
    cout << "The ceil of " << num1 << " is:: " << ceil(num1) << endl;
    cout << "The floor of " << num1 << " is:: " << floor(num1) << endl;

    num1 = -9.3;
    cout << "The absolute value of " << num1 << " is:: " << fabs(num1) << endl;
    
    num1 = 2.0;
    cout << "The power of " << num1 << " raised to " << num2 << " is:: " << pow(num1, num2) << endl;

    num1 = 100.01;
    cout << "The logarithm of " << num1 << " is:: " << log10(num1) << endl;
    cout << "The natural logarithm of " << num1 << " is:: " << log(num1) << endl;

    num2 = 1.0;
    cout << "The exponential of " << num2 << " is:: " << exp(num2) << endl;

    return 0;
}

