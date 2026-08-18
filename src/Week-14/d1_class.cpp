#include <iostream>
#include "../../header/Week-14/d1_class.hpp"


DClass1::DClass1() : BClass{0}, y{0.0} {
// DClass::DClass() {
    // y = 0.0;
    // BClass(0);
    std::cout << "DClass1 default constructor " << std::endl;
}


void DClass1::setDdata(double i) {
    y = i;
}

double DClass1::getDdata() const {
    return y;
}

void DClass1::display() const {
    std::cout << "BClass data: " << getBdata() << std::endl;
    std::cout << "DClass1 data: " << y << std::endl;
}

// Implementation is required otherwise DClass1 becomes abstract
void DClass1::bd() {
    std::cout << "Adding base and derived class data members :: " << y + getBdata() << std::endl;
    // std::cout << "Doing some computation in bd() :: " << getDdata() + getBdata() << std::endl; 
}