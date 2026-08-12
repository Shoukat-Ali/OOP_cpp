/**
 * This is an attempt to demonstrate polymorphism using virtual functions in C++.
 */

#ifndef VIRTUAL_D_CLASS_HPP
#define VIRTUAL_D_CLASS_HPP

#include "vb_class.hpp"

class DClass : public BClass {
public:
    DClass(); // default constructor
    ~DClass(); // destructor
    void setDdata(double i); // set DClass value
    double getDdata() const; // return DClass value
    virtual void display() const override; // display DClass value
    // virtual void display() const; // OK but prone to bugs 
private:
    double y;
};

#endif