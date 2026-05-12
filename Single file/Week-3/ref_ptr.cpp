/**
 * This is a simple program to demonstrate the use of reference variables and pointer variables in C++.
 * A reference variable is an alias for an already existing variable, and it must be initialized when it is declared. 
 * A pointer variable is a variable that holds the memory address of another variable.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 ref_ptr.cpp -o test
 */

#include <iostream>
#include <typeinfo> // for typeid operator


using std::cout;
using std::endl;


void foo(int&, int*);


int main()
{
    int a = 17;
    int& aRef = a; // alias for an already existing variable, therefore, must be initialized
                    // Note that reference variable can't be changed to refer to another variable
    int *ptr = nullptr; // variable to hold memory address of another variable

    // Using reference variable or alias
    aRef = 23;    
    cout << "Value of a:        " << a << endl
         << "Address of a:      " << &a << endl
         << "Type of a:         " << typeid(a).name() << endl;
    
    cout << "Value of aRef:     " << aRef << endl
         << "Address of aRef:   " << &aRef << endl
         << "Type of aRef:      " << typeid(aRef).name() << endl;

    // Using pointer variable
    ptr = &a;
    cout << "Value of ptr:      " << ptr << endl
         << "Address of ptr:    " << &ptr << endl
         << "Type of ptr:       " << typeid(ptr).name() << endl;

    int b = 19;
    ptr = &b;
    // Passing variable and pointer
    foo(a, ptr);
    cout  << "After calling foo(int& x, int* y) for foo(a, ptr), we have\n" 
          << "--> New value of a:        " << a << endl
          << "--> New value of b:        " << b << endl;

    // Passing reference variable and pointer
    foo(aRef, ptr);
    cout  << "After calling foo(int& x, int* y) for foo(aRef, ptr), we have\n"
          << "--> New value of a:        " << a << endl
          << "--> New value of b:        " << b << endl;
    // Passing variable and its address
    //foo(a, &a);

    return 0;
}


void foo(int& x, int* y)
{
    static int z = 1;
    cout << "Inside foo()" << endl
         << "--> Value of int& x:           " << x << endl
         << "--> Address of int&  x:        " << &x << endl
         << "--> Type of int&  x:           " << typeid(x).name() << endl;
    
    cout << "--> Value of int* y:           " << y << endl
         << "--> Content of *y:             " << *y << endl
         << "--> Address of int* y:         " << &y << endl
         << "--> Type of int* y:            " << typeid(y).name() << endl;

    // Changing the contents
    x = 47 + z;
    *y = 51 + z;
    z++;
}