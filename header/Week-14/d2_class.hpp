/**
 * This is part of the demonstration to show abstract base class and pure virtual function in inheritance hierarchy.
 * This is class is a concrete derived class from the abstract base class.
 */


#ifndef CONCRETE_D2_CLASS_HPP
#define CONCRETE_D2_CLASS_HPP

#include "b_class.hpp"

class DClass2 : public BClass {
public:
    DClass2(); // default constructor
    virtual ~DClass2() = default; // compiler generates virtual destructor
    void setDdata(long long int v); // set DClass2 value
    long long int getDdata() const; // return DClass2 value
    virtual void display() const override; // display DClass2 value
    virtual void bd() override; // compute something
private:
    long long int z;
};

#endif