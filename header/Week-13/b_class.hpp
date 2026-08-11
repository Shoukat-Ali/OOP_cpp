/**
 * This is an attempt to demonstrate the following iideas
 *      1. Using base-class pointer pointing to derived-class object
 *      2. Using derived-class pointer pointing to derived-class object
 */

#ifndef B_CLASS_HPP
#define B_CLASS_HPP

class BClass {
public:
    explicit BClass(int a); // BClass default constructor
    ~BClass(); // BClass destructor
    void setBdata(int i); // set BClass value
    int getBdata() const; // return BClass value
    void display() const; // display BClass value
private:
    int x;
};

#endif