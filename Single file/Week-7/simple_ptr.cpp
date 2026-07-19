/**
 * This is an attempt to demonstrate the use of pointer variable.
 * 
 * To compile and create and executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 simple_ptr.cpp -o test
 */

#include <iostream>

int main() {
    using std::cout;
    using std::endl;

    int num{7};
    int* nPtr{nullptr};

    cout << "The address of num is:   " << &num << endl;
    cout << "The address of nPtr is:  " << &nPtr << endl;
    
    nPtr = &num;
    cout << "After nPtr = &num,  we have" << endl;
    cout << "The content of nPtr is:  " << nPtr << endl;
    if (nPtr) {
    // if (nPtr != nullptr) {
        cout << "The content of *nPtr is: " << *nPtr << endl;
    }

    *nPtr = 11;
    cout << "After *nPtr = 11, we have" << endl;
    cout << "The content of num is:   " << num << endl;
    if (nPtr != nullptr) {
        cout << "The content of *nPtr is: " << *nPtr << endl;
    }

    return 0;
}