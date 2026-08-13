/**
 * This is an attempt to demonstrate polymorphism using virtual functions in C++.
 */

#ifndef VIRTUAL_B_CLASS_HPP
#define VIRTUAL_B_CLASS_HPP

class BClass {
public:
    explicit BClass(int a); // default constructor
    ~BClass(); // destructor
    // virtual ~BClass(); // virtual destructor makes all derived class destructors virtual
    void setBdata(int i); // set BClass value
    int getBdata() const; // return BClass value
    virtual void display() const; // display BClass value
private:
    int x;
};

#endif