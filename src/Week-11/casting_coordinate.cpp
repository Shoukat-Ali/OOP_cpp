#include <iostream>
#include <stdexcept>
#include "../../header/Week-11/casting_coordinate.hpp"

Coordinate::Coordinate(int dx, int dy) : x{dx}, y{dy} {
    // empty
}

//explicit type conversoin to string "(x, y)"
Coordinate::operator std::string() const {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}
    
// both implicit and explict conversion to x/y
Coordinate::operator double() const {
    if (y == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return static_cast<double>(x / y);
}

Coordinate::~Coordinate() {
    // To leaven no trace, resetting the values to 0 
    x = 0;
    y = 0;
}