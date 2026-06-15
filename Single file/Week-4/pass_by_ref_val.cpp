/**
 * This is a simple program that demonstrates the difference between pass by value and pass by reference in C++. 
 * Moreover, the program also demostrates the use of reference to variable.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -std=c++11 pass_by_ref_val.cpp -o test
 */
#include <iostream>

using std::cout;
using std::endl;

int squareByValue(int); // function prototype (value pass)
void squareByReference(int&); // function prototype (reference pass)
void squareByConstReference(const int&); // function prototype (reference pass)

int main() {    
    int x{2}; // value to square using squareByValue
    int z{4}; // value to square using squareByReference
    int& y{x}; // reference to variable x
    const int& w{y}; // reference to variable y (which is a reference to x)

    int b = y;
    cout << "b = " << b << " reference to y to x\n";

    // ++w;
    // ++y;
    ++x;
    cout << "y is an alias of x wehre the value is : " << y << endl;
    y = z;   // value of z is assigned to x
    cout << "y is updated to y = z, therefore, we x is : " << x << endl;

    cout << "w = " << w << " reference to y to x\n";
    
    // demonstrate squareByValue
    cout << "x = " << x << " before squareByValue\n";
    cout << "Value returned by squareByValue: " << squareByValue(x) << endl;
    cout << "x = " << x << " after squareByValue\n" << endl;
    
    // demonstrate squareByReference
    cout << "z = " << z << " before squareByReference" << endl;
    squareByReference(z);
    cout << "z = " << z << " after squareByReference" << endl;

    // demonstrate squareByConstReference
    cout << "x = " << x << " before squareByConstReference" << endl;
    squareByConstReference(x);
    cout << "x = " << x << " after squareByConstReference" << endl;
}


// squareByValue multiplies number by itself, stores the
// result in number and returns the new value of number
int squareByValue(int number) {
    return number *= number; // caller's argument not modified
}

// squareByReference multiplies numberRef by itself and stores the result
// in the variable to which numberRef refers in function main
void squareByReference(int& numberRef) {
    numberRef *= numberRef; // caller's argument modified
}


// squareByConstReference multiplies numberRef by itself and stores the result
// in the variable to which numberRef refers in function main
void squareByConstReference(const int& numberRef) {
    int res = numberRef;
    res *= res; // caller's argument not modified
    cout << "Result of squaring by const reference: " << res << endl;
}