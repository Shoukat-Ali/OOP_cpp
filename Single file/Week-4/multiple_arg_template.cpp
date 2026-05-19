/**
 * This program is an attempt to demonstrate function templates with multiple type parameters and variadic templates in C++.
 * A function template with multiple type parameters allows you to create a function that can accept different types of arguments.
 * A variadic template function can accept a variable number of arguments of any type.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -std=c++11 multiple_arg_template.cpp -o test
 */
#include <iostream>

using std::cout;
using std::endl;

// Function template with multiple type parameters
template <typename T1, typename T2>
void myDisplay(T1 a, T2 b) {
    cout << "1st parameter : " << a << ",\t" 
         << "2nd parameter : " << b << endl;
}

// Variadic template function to print multiple arguments of any type
template <typename... Args>
void myPrint(Args... args) {
    // Trick: expand parameter pack inside an initializer list
    int dummy[] = { (cout << args << " ", 0)... };
    (void)dummy; // avoid unused variable warning
    cout << endl;
}


int main() {
    myDisplay(20, 42);        // int and int
    myDisplay(3.14, 2.718);   // double and double
    myDisplay(10, 3.14);      // int and double
    myDisplay(7.57, 11);      // double and int
    myDisplay('A', 17);      // char and int
    myDisplay("Hello", 'A');  // const char* and char

    myPrint(1, 2.5, "Hello", 'A', true); // Multiple arguments of different types

    return 0;
}