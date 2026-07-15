/**
 * This is a simple example to demonstrate composition. 
 * Here, we provoide the defintion of all member functions of MyClass1 
 */

#include <iostream>
#include "../../header/Week-9/my_class1.hpp"

// Constructor with one parameter
MyClass1::MyClass1(int value) {
    if (value >= 0) {
        x = value;
    } 
    else {
        x = 0; // Default to 0 if a negative value is provided
    }
    std::cout << "MyClass1 one parameter constructor initializes x: " << x << std::endl;
}

// Setter function to set the value of private data member x
void MyClass1::setX(int value) {
    if (value > 0) {
        x = value;
    }
}

// Getter function to get the value of private data member x
int MyClass1::getX() const {
    return x;
}

// Destructor to clean up resources (if any) when an object of MyClass1 is destroyed
MyClass1::~MyClass1() {
    x = 0; // Reset x to 0 (not strictly necessary, but good practice)
    std::cout << "MyClass1 destructor resets x: " << x << std::endl;
}
