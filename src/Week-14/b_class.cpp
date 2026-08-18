#include <iostream>
#include "../../header/Week-14/b_class.hpp"


BClass::BClass(int a) : x{a} {
    std::cout << "BClass default constructor " << std::endl;
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