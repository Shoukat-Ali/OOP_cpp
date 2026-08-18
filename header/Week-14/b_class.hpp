/**
 * This is an attempt to demonstrate abstract base class and pure virtual function in inheritance hierarchy.
 */

#ifndef ABSTRACT_B_CLASS_HPP
#define ABSTRACT_B_CLASS_HPP

class BClass {
public:
    explicit BClass(int a); // default constructor
    virtual ~BClass() = default; // compiler generates virtual destructor
    void setBdata(int i); // set BClass value
    int getBdata() const; // return BClass value
    virtual void display() const; // virtual function
    virtual void bd() = 0; // pure vitual function
private:
    int x;
};

#endif