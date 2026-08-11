/**
 * To compile and create an executable file, use the following command:
 * 
 *      g++ -Wall -Werror -std=c++11 unique_ptr.cpp -o test
 * 
 */


#include <iostream>
#include <memory>


class MyClass {
public:
    MyClass() { 
        std::cout << "Constructor: MyClass acquired\n"; 
    }
    ~MyClass() { 
        std::cout << "Destructor: MyClass destroyed\n"; 
    }
};

int main() {
    // Create a unique_ptr
    std::unique_ptr<MyClass> ptr1{new MyClass()};
    // C++14 syntax
    // std::unique_ptr<MyClass> ptr1 = std::make_unique<MyClass>();
    
    // The statement is incorrect std::unique_ptr<MyClass> ptr1 = new MyClass()
    // because the constructor of std::unique_ptr that accepts a raw pointer is marked as explicit. 
    // This is a deliberate design choice in the C++ Standard Library to prevent accidental and unsafe conversions 
    // from raw pointers to smart pointers, which could easily lead to double-free bugs.

    // Transfer ownership to ptr2 using std::move
    std::unique_ptr<MyClass> ptr2 = std::move(ptr1);

    // Check states
    if (!ptr1) {
        std::cout << "ptr1 is now null (empty)\n";
    }
    
    if (ptr2) {
        std::cout << "ptr2 now owns the MyClass\n";
    }

    return 0; // MyClass is cleaned up automatically here when ptr2 goes out of scope
}