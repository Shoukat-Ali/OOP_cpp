#include <iostream>
#include "../../header/Week-14/d2_class.hpp"


DClass2::DClass2() : BClass{0}, z{0} {
// DClass::DClass() {
    // y = 0.0;
    // BClass(0);
    std::cout << "DClass2 default constructor " << std::endl;
}


void DClass2::setDdata(long long int v) {
    z = v;
}

long long int DClass2::getDdata() const {
    return z;
}

void DClass2::display() const {
    std::cout << "BClass data: " << getBdata() << std::endl;
    std::cout << "DClass2 data: " << z << std::endl;
}

// Implementation is required otherwise DClass2 becomes abstract
void DClass2::bd() {
    std::cout << "Adding base and derived class data members :: " << z + getBdata() << std::endl;
    // std::cout << "Doing some computation in bd() :: " << getDdata() + getBdata() << std::endl; 
}
