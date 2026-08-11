#include <iostream>
#include "../../header/Week-13/d_class.hpp"


DClass::DClass() : BClass(0), y(0.0) {
// DClass::DClass() {
    // y = 0.0;
    // BClass(0);
    std::cout << "DClass default constructor " << std::endl;
}


DClass::~DClass() {
    std::cout << "DClass destructor " << std::endl;
}

void DClass::setDdata(double i) {
    y = i;
}

double DClass::getDdata() const {
    return y;
}

void DClass::display() const {
    std::cout << "BClass data: " << getBdata() << std::endl;
    std::cout << "DClass data: " << y << std::endl;
}