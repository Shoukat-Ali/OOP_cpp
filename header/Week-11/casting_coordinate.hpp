/**
 * This is an attempt to demonstrate type conversion implicitly and explicity using cast operator. 
 */

#ifndef CASTING_COORDINATE_HPP
#define CASTING_COORDINATE_HPP

#include <string>

class Coordinate {
public:
    explicit Coordinate(int = 0, int = 0);
    explicit operator std::string() const;      // explicit conversion
    operator double() const;                    // Both explicit and implicit conversion
    ~Coordinate();
private:
    int x;
    int y;
};

#endif