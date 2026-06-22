/**
 * This is an attempt to demonstrate relationship between raw/built-in array and pointers.  
 * 
 * To compile and create an executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 ptr_arr_notation.cpp -o test
 */
#include <iostream>


int main() {
    using std::cout;
    using std::endl;

    const size_t arrSize{5};
    int b[arrSize]{10, 20, 30, 40, 50}; // create 5-element built-in array b
    int* bPtr{b}; // set bPtr to point to built-in array b
    
    // output built-in array b using array subscript notation
    cout << "Array b displayed with:\n\nArray subscript notation\n";
    for (size_t i{0}; i < arrSize; ++i) {
        cout << "b[" << i << "] = " << b[i] << '\n';
    }
    
    // output built-in array b using array name and pointer/offset notation
    cout << "\nPointer/offset notation where " << "the pointer is the array name\n";
    for (size_t offset1{0}; offset1 < arrSize; ++offset1) {
        cout << "*(b + " << offset1 << ") = " << *(b + offset1) << '\n';
    }
    
    // output built-in array b using bPtr and array subscript notation
    cout << "\nPointer subscript notation\n";
    for (size_t j{0}; j < arrSize; ++j) {
        cout << "bPtr[" << j << "] = " << bPtr[j] << '\n';
    }

    cout << "\nPointer/offset notation\n";
    // output built-in array b using bPtr and pointer/offset notation
    for (size_t offset2{0}; offset2 < arrSize; ++offset2) {
        cout << "*(bPtr + " << offset2 << ") = " << *(bPtr + offset2) << '\n';
    }

    return 0;
}