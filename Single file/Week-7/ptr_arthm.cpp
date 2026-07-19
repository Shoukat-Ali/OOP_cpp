/**
 * This is an attempt to demonstrate the pointer arithmetic with raw/built-in array;
 * 
 * To compile and create and executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 ptr_arthm.cpp -o test
 */

#include <iostream>

int main() {
    using std::cout;
    using std::endl;

    int arr[5]{10, 20, 30, 40, 50};
    int* ptr1{arr};    	// points to arr[0]
    int* ptr2{&arr[4]};	// points to arr[4]

    // Usage of void pointer
    void* ptr3 = arr;
    // cout << *ptr3;      // Error pionter to unknown type, therefore, cannot de-reference
    // ptr2 = ptr3;        // Error unknown type cannot be pointed to by known pointer type
    // ptr2 = reinterpret_cast<int*> (ptr3);
    
    // cout << "Memory address of arr: " << arr << endl
    //      << "Memory address ptr1 points to: " << ptr1 << endl
    //      << "Memory address ptr2 points to: " << ptr2 << endl;

    cout << "Content of memory location that ptr1 points to: " << *ptr1 << endl;
    cout << "Content of memory location that ptr2 points to: " << *ptr2 << endl;

    ptr1 += 2;	// points to 3008 = (3000 + 2*4)
    ptr2 -= 3;	// points to 3004 = (3016 – 3*4)
    
    // cout << "Memory address ptr1 points to: " << ptr1 << endl
    //      << "Memory address ptr2 points to: " << ptr2 << endl;

    cout << "Content of memory location that ptr1 points to: " << *ptr1 << endl;
    cout << "Content of memory location that ptr2 points to: " << *ptr2 << endl;

    // increments the pointer to point to next element
    ++ptr1;
    // ptr1++;

    // cout << "Memory address ptr1 points to: " << ptr1 << endl;
    cout << "Content of memory location that ptr1 points to: " << *ptr1 << endl;
    
    // decrement the pointer to point to previous element
    // --ptr2;
    ptr2--;

    // cout << "Memory address ptr2 points to: " << ptr2 << endl;
    cout << "Content of memory location that ptr2 points to: " << *ptr2 << endl;
    
    ptr2++;
    int x = ptr1 - ptr2;

    cout << "For x = ptr1 - ptr2,  we have: " << x << endl;

    return 0;
}