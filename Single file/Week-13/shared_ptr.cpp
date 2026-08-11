/**
 * To compile and create an executable file, use the following command:
 * 
 *      g++ -Wall -Werror -std=c++11 shared_ptr.cpp -o test
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
    // Create a shared_ptr
    std::shared_ptr<MyClass> ptr1{new MyClass()};
    // Note: Best practice is to use std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>(); 
    // which is more efficient and safer because it allocates the control block and object together.
    // std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();

    std::cout << "Initial reference count (ptr1.use_count()): " << ptr1.use_count() << "\n";

    // Share ownership with ptr2 (unlike unique_ptr, shared_ptr allows copying)
    std::shared_ptr<MyClass> ptr2 = ptr1;
    

    // 3. Check states and reference counts
    if (ptr1) {
        std::cout << "ptr1 still owns the MyClass\n";
    }
    if (ptr2) {
        std::cout << "ptr2 now shares ownership of the MyClass\n";
    }

    std::cout << "Current reference count after sharing (use_count()): " << ptr1.use_count() << "\n";

    // When main exits, ptr2 goes out of scope first (reference count drops to 1), 
    // and then ptr1 goes out of scope (reference count drops to 0).
    // The MyClass destructor will be automatically triggered only when the last reference is destroyed.

    return 0; 
}