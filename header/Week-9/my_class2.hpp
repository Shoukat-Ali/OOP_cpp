/**
 * This is a simple example to demonstrate composition. 
 * The class MyClass2 contains an object of MyClass1 as a member variable. 
 */


#ifndef MY_CLASS2_HPP
#define MY_CLASS2_HPP

#include "my_class1.hpp"

class MyClass2 {
public:
    MyClass2();     // Default constructor
    MyClass2(double, MyClass1 obj1);       // Constructor with two parameters
    void display() const;
    ~MyClass2();    // Destructor

private:
    MyClass1 objmc1;    // An object of MyClass1 as a data member
    double y{0.0};
    MyClass1 objmc2;    // An object of MyClass1 as a data member
};

#endif