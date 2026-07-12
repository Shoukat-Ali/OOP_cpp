/**
 * This is a simple example to demonstrate composition. 
 * The class MyClass2 contains an object of MyClass1 as a member variable. 
 */


#ifndef MY_CLASS2_HPP
#define MY_CLASS2_HPP

#include "my_class1.hpp"

class MyClass2 {
public:
    MyClass2();
    MyClass2(int, MyClass1 obj1);
    void display() const;
    ~MyClass2();

private:
    MyClass1 objmc1;    // An object of MyClass1 as a data member
    int y{0};
};

#endif