/**
 * This a simple program to demonstrate the use of global and local namespaces in C++.
 * To compile and run this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 namespace_global_local.cpp -o test
 */
#include <iostream>

using namespace std; // program uses the standard namespace


void cout() {
    cout << "my cout function" << std::endl;
}

int main() 
{
    cout(); // Error, name coflict with the standard cout function
    cout << "This is the standard cout" << std::endl; // calls the standard cout function

    return 0;
}