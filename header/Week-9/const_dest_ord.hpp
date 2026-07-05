/**
 * This example is taken from the textbook to demonstrate the order in which constructor and destructor 
 * are called when an object is created and destroyed.
 */

#include <string>
#ifndef CONST_DEST_ORD_HPP
#define CONST_DEST_ORD_HPP

class CreateAndDestroy {
public:
    CreateAndDestroy(int, std::string); // constructor
    // You can define other member functions
    ~CreateAndDestroy(); // destructor
private:
    int objectID; // ID number for object
    std::string message; // message describing object
};

#endif