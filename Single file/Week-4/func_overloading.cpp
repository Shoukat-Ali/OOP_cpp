/**
 * This program is an attempt to demonstrate function overloading in C++. 
 * Function overloading allows multiple functions to have the same name but different parameter lists. 
 * The compiler determines which function to call based on the arguments passed to the function.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -std=c++11 func_overloading.cpp -o test
 */
#include <iostream>

using std::cout;
using std::endl;

// function square for int values
int square(int x) {
    cout << "square of integer " << x << " :: ";
    return x * x;
}

// function square for double values
double square(double y) {
    cout << "square of double " << y << " :: ";
    return y * y;
}

// function area 
void area(int x, double y) {
    cout << "Area :: " << x * y << endl;
}

// function area 
void area(double x, int y) {
    cout << "Area :: " << x * y << endl;
}


int main() {
    cout << square(7); // calls int version
    cout << endl;
    cout << square(7.5); // calls double version
    cout << endl;
    area(5, 10.5); // calls area(int, double)
    area(5.5, 10); // calls area(double, int)
}