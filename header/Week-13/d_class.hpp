/**
 * This is an attempt to demonstrate the following iideas
 *      1. Using base-class pointer pointing to derived-class object
 *      2. Using derived-class pointer pointing to derived-class object
 */

#ifndef D_CLASS_HPP
#define D_CLASS_HPP

#include "b_class.hpp"

class DClass : public BClass {
public:
    DClass(); // DClass default constructor
    ~DClass(); // DClass destructor
    void setDdata(double i); // set DClass value
    double getDdata() const; // return DClass value
    void display() const; // display DClass value
private:
    double y;
};

#endif