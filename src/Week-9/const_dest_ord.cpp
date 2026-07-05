/**
 * This example is taken from the textbook to demonstrate the order in which constructor and destructor 
 * are called when an object is created and destroyed.
 */

#include <iostream>
#include "../../header/Week-9/const_dest_ord.hpp" //Forward slash for header path works on Linux and Windows in VS Code

// constructor sets object's ID number and descriptive message
CreateAndDestroy::CreateAndDestroy(int ID, std::string messageString) : objectID{ID}, message{messageString} {
    std::cout << "Object-" << objectID << " constructor runs" << message << std::endl;
}

// destructor
CreateAndDestroy::~CreateAndDestroy() {
    // output newline for certain objects; helps readability
    std::cout << (objectID == 1 || objectID == 6 ? "\n" : "");
    std::cout << "Object-" << objectID << " destructor runs " << message << std::endl;
}