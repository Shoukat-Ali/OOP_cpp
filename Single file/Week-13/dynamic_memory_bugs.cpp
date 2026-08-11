/**
 * This is an attempt to demonstrate a memory leak, dangling pointer, and double delete in C++. 
 * A memory leak occurs when dynamically allocated memory is not properly deallocated, leading to wasted memory resources.
 * A dangling pointer occurs when a pointer continues to reference a memory location after it has been deallocated.
 * A double delete occurs when the same memory location is deallocated twice, leading to undefined behavior.
 */

#include <iostream>

void func1() {
    // Allocate memory on the heap for an integer
    int* ptr = new int(5); 
    
    std::cout << "func1(): Value: " << *ptr << std::endl;

    /**
     * The function ends here without calling 'delete ptr;'
     * 'ptr' (the local pointer variable) is destroyed, 
     * but the allocated memory on the heap remains occupied indefinitely.
     */
}

void func2() {
    // Allocate memory on the heap for an integer
    int* ptr = new int(7); 
    
    std::cout << "func2(): Value: " << *ptr << std::endl;

    delete ptr;
    /**
     * Trying to de-reference a dangling pointer 
     */
    std::cout << "Dangling pointer value: " << *ptr << std::endl;
}


void func3() {
    // Allocate memory on the heap for an integer
    int* ptr = new int(9); 
    
    std::cout << "func3(): Value: " << *ptr << std::endl;

    delete ptr;
    delete ptr; // Double delete occurs here, leading to undefined behavior
}

void func4() {
    // Allocate memory on the heap for an integer
    int* ptr = new int(11); 
    
    std::cout << "func4(): Value: " << *ptr << std::endl;

    delete ptr;
    ptr = nullptr; // Resetting the pointer to nullptr to avoid dangling pointer and double delete issues
    delete ptr; // Safe to call delete on a nullptr, no effect
    delete ptr;
}


int main() {
    func1(); // Memory is leaked every time this function runs
    func2();
    func3();
    func4();
    return 0;
}