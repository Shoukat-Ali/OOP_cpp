#include <iostream>
#include <stdexcept>
#include <limits>
#include "../../header/Week-11/coordinate_inc_dec.hpp"

Coordinate::Coordinate(int dx, int dy) {
    if (dx < std::numeric_limits<int>::min() || dx > std::numeric_limits<int>::max()) {
        throw std::invalid_argument("Invalid value to set dimension x");
    }
    if (dy < std::numeric_limits<int>::min() || dy > std::numeric_limits<int>::max()) {
        throw std::invalid_argument("Invalid value to set dimension y");
    }
    x = dx;
    y = dy;
}

// prefix increment (++obj) as member function
Coordinate& Coordinate::operator++() {
    if (x == std::numeric_limits<int>::max() || y == std::numeric_limits<int>::max()) {
        throw std::overflow_error("Integer overflow danger");
    }
    ++x;
    ++y;
    return *this;   // return updated object by reference
}
    
// postfix increment (obj++) as member function
Coordinate Coordinate::operator++(int) {
    if (x == std::numeric_limits<int>::max() || y == std::numeric_limits<int>::max()) {
        throw std::overflow_error("Integer overflow danger");
    }
    Coordinate temp = *this; // Save current state
    x++;
    y++;
    return temp;    // return original object's state by value
}
    
// prefix decrement (--obj) as member function
Coordinate& Coordinate::operator--() {
    if (x == std::numeric_limits<int>::min() || y == std::numeric_limits<int>::min()) {
        throw std::underflow_error("Integer underflow danger");
    }
    --x;
    --y;
    return *this;   // return updated object by reference
}

// postfix decrement (obj--) as member function
Coordinate Coordinate::operator--(int) {
    if (x == std::numeric_limits<int>::min() || y == std::numeric_limits<int>::min()) {
        throw std::underflow_error("Integer underflow danger");
    }
    Coordinate temp = *this; // Save current state
    x--;
    y--;
    return temp;    // return original object's state by value
}
    
void Coordinate::display() const {
    std::cout   << "Coordinate x: " << x << std::endl
                << "Coordinate y: " << y << std::endl;
}

Coordinate::~Coordinate() {
    // To leaven no trace, resetting the values to 0 
    x = 0;
    y = 0;
}