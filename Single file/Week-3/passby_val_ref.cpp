/**
 * This is an attempt to demonstrate the difference between pass by value and pass by reference in C++.
 * In pass by value, a copy of the argument is passed to the function, and any modifications made to the 
 * parameter inside the function do not affect the original argument.
 * In pass by reference, a reference to the original argument is passed to the function, and any modifications 
 * made to the parameter inside the function do affect the original argument.
 * 
 * To compile and create executable of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 passby_val_ref.cpp -o test
 */
#include <iostream>


int squareByValue(int); // function prototype (value pass)
void squareByReference(int&); // function prototype (reference pass)

int main() {
    using std::cout;
    using std::endl;

    int x{2}; // value to square using squareByValue
    int z{4}; // value to square using squareByReference
    
    // demonstrate squareByValue
    cout << "x = " << x << " before squareByValue\n";
    cout << "Value returned by squareByValue: " << squareByValue(x) << endl;
    cout << "x = " << x << " after squareByValue\n" << endl;
    
    // demonstrate squareByReference
    cout << "z = " << z << " before squareByReference" << endl;
    squareByReference(z);
    cout << "z = " << z << " after squareByReference" << endl;
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