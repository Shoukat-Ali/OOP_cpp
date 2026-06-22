/**
 * This is an attempt to demonstrate passing arguments to a funcion using 
 * pass-by-reference with pointer, pass-by-reference, and pass-by-value.
 * 
 * To compile and create and executable file of this program, , please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 passby_ptr_ref_val.cpp -o test
 */

#include <iostream>

long long cubeByVal(int);
void cubeByRef(int&);
void cubeByPtr(int*);

int main() {
    using std::cout;
    using std::endl;

    int num1{3}, num2{4};
    cout << "Calling cubeByVal(" << num1 << ") returns: " << cubeByVal(num1) << endl;
    
    cout << "Calling cubeByRef(" << num1 << ") ";
    cubeByRef(num1);
    cout << "modifies original value: " << num1 << endl;
    
    cout << "Calling cubeByPtr(" << num2 << ") ";
    cubeByPtr(&num2);
    cout << "modifies original value: " << num2 << endl;
    
    return 0;
}

long long cubeByVal(int x) {
    return x * x * x;
}

void cubeByRef(int& x) {
    x = x * x * x;
}

void cubeByPtr(int* x) {
    *x = (*x) * (*x) * (*x); 
}