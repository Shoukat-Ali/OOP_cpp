/**
 * The example is take from the textbook and modified according to our needs.
 */

#ifndef UNIQUE_PTR_HPP
#define UNIQUE_PTR_HPP

class MyInteger {
public:
    explicit MyInteger(int i = 0); // MyInteger default constructor
    ~MyInteger(); // MyInteger destructor
    void setMyInteger(int i); // set MyInteger value
    int getMyInteger() const; // return MyInteger value
private:
    int value;
};

#endif