#include <iostream>
#include "../../header/Week-13/unique_ptr.hpp"

// MyInteger default constructor
MyInteger::MyInteger(int i) : value{i} {
    std::cout << "Constructor for MyInteger " << value << std::endl;
}

// MyInteger destructor
MyInteger::~MyInteger() {
    std::cout << "Destructor for MyInteger " << value << std::endl;
    value = 0;
}

// set MyInteger value
void MyInteger::setMyInteger(int i) {
    value = i;
}

// return MyInteger value
int MyInteger::getMyInteger() const {
    return value;
}