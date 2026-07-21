/**
 * This is an attempt to demonstrate the overloading of increment and decrement operators using objects. 
 */

#ifndef COORDINATE_INC_DEC_HPP
#define COORDINATE_INC_DEC_HPP

class Coordinate {
public:
    explicit Coordinate(int = 0, int = 0);
    Coordinate& operator++();    // prefix increment
    Coordinate operator++(int);  // postfix increment
    Coordinate& operator--();    // prefix decrement
    Coordinate operator--(int);  // postfix decrement
    void display() const;
    ~Coordinate();
private:
    int x;
    int y;
};

#endif