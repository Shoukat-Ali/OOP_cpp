/**
 * This is an attempt to demonstrate the following iideas
 *      1. Using base-class pointer pointing to derived-class object
 *      2. Using derived-class pointer pointing to derived-class object
 */

#ifndef B_CLASS_HPP
#define B_CLASS_HPP

class BClass {
public:
    explicit BClass(int a); // BClass constructor
    ~BClass(); // BClass destructor
    void setBdata(int i); // set BClass data x
    int getBdata() const; // return BClass data x
    void display() const; // display BClass data x
private:
    int x;
};

#endif