/**
 * This is an attempt to demonstrate the following iideas
 *      1. Using base-class pointer pointing to derived-class object
 *      2. Using derived-class pointer pointing to derived-class object
 * 
 * For this example, we use BClass as base class and DClass as derived class.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 vbd_class_test.cpp ../../src/Week-13/vb_class.cpp ../../src/Week-13/vd_class.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 vbd_class_test.cpp -o vbd_class_test.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-13/vb_class.cpp -o vb_class.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-13/vd_class.cpp -o vd_class.o
 *      g++ vbd_class_test.o vb_class.o vd_class.o -o test
 * 
 */

#include <iostream>
#include "../../header/Week-13/vb_class.hpp"
#include "../../header/Week-13/vd_class.hpp"

int main() {
    DClass dObj;
    BClass* basePtr{&dObj};
    // BClass& baseRef{dObj};
    // BClass* basePtr{new DClass()};

    // Set values using the base-class pointer
    basePtr->setBdata(10);
    // basePtr->setDdata(20.5); // Error
    // baseRef.setBdata(20);
    // // Demonstrating dynamic_cast operation
    // DClass* dPtr = dynamic_cast<DClass*>(basePtr);
    // if (dPtr != nullptr) {
    //     dPtr->setDdata(22.7);
    // }

    // Display values using the base-class pointer
    basePtr->display();
    // baseRef.display();

    // delete basePtr; // Clean up to deallocate memory


    std::cout << "----------------------------------------" << std::endl;

    // Create a derived-class pointer pointing to a derived-class object
    DClass* derivedPtr{&dObj};
    // DClass* derivedPtr{new DClass()};

    derivedPtr->setBdata(30);
    derivedPtr->setDdata(40.5);

    // Display values using the derived-class pointer
    derivedPtr->display(); // This will call the display method of DClass

    // delete derivedPtr; // Clean up to deallocate memory

    return 0;
}