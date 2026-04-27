// The following code snippet is from the textbook
/**
 * This a simple program to demonstrate the use of if statements in C++.
 * To compile and run this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 simple_if_exmp.cpp -o test
 */
#include <iostream>

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl


int main() 
{
    int number1{0}; // first integer to compare (initialized to 0)
    int number2{0}; // second integer to compare (initialized to 0)
    
    cout << "Enter two integers to compare: "; // prompt user for data
    cin >> number1 >> number2; // read two integers from user
    if (number1 == number2) {
        cout << number1 << " == " << number2 << endl;
    }
    if (number1 != number2) {
        cout << number1 << " != " << number2 << endl;
    }
    if (number1 < number2) {
        cout << number1 << " < " << number2 << endl;
    }
    if (number1 > number2) {
        cout << number1 << " > " << number2 << endl;
    }
    if (number1 <= number2) {
        cout << number1 << " <= " << number2 << endl;
    }
    if (number1 >= number2) {
        cout << number1 << " >= " << number2 << endl;
    }
}