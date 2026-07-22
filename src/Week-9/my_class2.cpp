/**
 * This is a simple example to demonstrate composition. 
 * Here, we provoide the defintion of MyClass2's member functions. 
 */

#include <iostream>
#include <iomanip>
#include "../../header/Week-9/my_class2.hpp"

// Default constructor
MyClass2::MyClass2() {
    std::cout   << "MyClass2 default constructor initializes\n" 
                << "\tobjmc1 data: " << objmc1.getX() 
                << ", y: " << std::fixed << std::setprecision(2) << y
                << ", objmc2 data: " << objmc2.getX() << std::endl;
}


// Constructor with two parameters
MyClass2::MyClass2(double value, MyClass1 obj1) : objmc1{obj1} {
    if (value > 0.0) {
        y = value;
    }
    std::cout << "MyClass2 two parameters constructor initializes\n" 
              << "\tobjmc1: " << objmc1.getX() 
              << ", y: " << std::fixed << std::setprecision(2) << y
              << ", objmc2: " << objmc2.getX() << std::endl;
}

// Function to display the values of the member variables
void MyClass2::display() const {
    std::cout   << "MyClass2 display()\n" << "\tobjmc1 data: " << objmc1.getX() 
                << ", y: " << std::fixed << std::setprecision(2) << y
                << ", objmc2 data: " << objmc2.getX() << std::endl;
    
}



// Destructor to clean up resources (if any) when an object of MyClass2 is destroyed
MyClass2::~MyClass2() {
    y = 0.0;
    std::cout << "MyClass2 destructor resets y: " << std::fixed << std::setprecision(2) << y << std::endl;
}