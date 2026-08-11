/**
 * To compile and create an executable file, use the following command:
 * 
 *    g++ -Wall -Werror -std=c++11 weak_ptr.cpp -o test
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
    // Create a shared_ptr (std::weak_ptr can only observe an object managed by a std::shared_ptr)
    std::shared_ptr<MyClass> sharedPtr{new MyClass()};

    // Create a weak_ptr observing the resource managed by sharedPtr
    std::weak_ptr<MyClass> weakPtr = sharedPtr;
    // Unlike shared_ptr, constructing a weak_ptr does NOT increase the object's reference count. 
    // It is a non-owning observer.

    std::cout << "Shared reference count (use_count()): " << sharedPtr.use_count() << "\n";

    // Accessing the object using .lock()
    // A weak_ptr does not provide direct access (no operator* or operator->). 
    // You must temporarily convert it to a shared_ptr using .lock() to ensure the object is still alive while you use it.
    if (auto tempShared = weakPtr.lock()) {
        std::cout << "Successfully locked weakPtr; object is still alive.\n";
    }

    // Release the shared_ptr
    std::cout << "Resetting sharedPtr...\n";
    sharedPtr.reset(); // The object is destroyed HERE because no shared_ptr owners remain, even though weakPtr still exists!

    // Check if the weak_ptr has expired
    if (weakPtr.expired()) {
        std::cout << "weakPtr has expired (the managed object has been destroyed)\n";
    }

    // Attempting to lock an expired weak_ptr returns an empty (null) shared_ptr
    if (weakPtr.lock() == nullptr) {
        std::cout << "Trying to lock an expired weak_ptr safely fails (returns null)\n";
    }

    return 0; 
}