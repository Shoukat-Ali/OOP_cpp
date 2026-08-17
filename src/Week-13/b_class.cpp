#include <iostream>
#include "../../header/Week-13/b_class.hpp"


BClass::BClass(int a) : x{a} {
    std::cout << "BClass default constructor " << std::endl;
}

BClass::~BClass() {
    std::cout << "BClass destructor " << std::endl;
}

void BClass::setBdata(int i) {
    x = i;
}

int BClass::getBdata() const {
    return x;
}

void BClass::display() const { // display BClass value
    std::cout << "BClass data: " << x << std::endl;
}