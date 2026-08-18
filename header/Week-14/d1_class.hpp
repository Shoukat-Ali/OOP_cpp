/**
 * This is part of the demonstration to show abstract base class and pure virtual function in inheritance hierarchy.
 * This is class is a concrete derived class from the abstract base class.
 */


#ifndef CONCRETE_D1_CLASS_HPP
#define CONCRETE_D1_CLASS_HPP

#include "b_class.hpp"

class DClass1 : public BClass {
public:
    DClass1(); // default constructor
    virtual ~DClass1() = default; // compiler generates virtual destructor
    void setDdata(double i); // set DClass1 value
    double getDdata() const; // return DClass1 value
    virtual void display() const override; // display DClass1 value
    virtual void bd() override; // compute something
private:
    double y;
};

#endif