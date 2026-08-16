/**
 * This is an attempt to demonstrate the following iideas
 *      1. Using base-class pointer pointing to derived-class object
 *      2. Using derived-class pointer pointing to derived-class object
 * 
 * For this example, we use BClass as base class and DClass as derived class.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 bd_class_test.cpp ../../src/Week-13/b_class.cpp ../../src/Week-13/d_class.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 bd_class_test.cpp -o bd_class_test.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-13/b_class.cpp -o b_class.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-13/d_class.cpp -o d_class.o
 *      g++ bd_class_test.o b_class.o d_class.o -o test
 * 
 */

#include <iostream>
#include "../../header/Week-13/b_class.hpp"
#include "../../header/Week-13/d_class.hpp"

int main() {
    DClass dObj;
    BClass* basePtr{&dObj};
    // BClass& baseRef{dObj};

    // Set values using the base-class pointer
    basePtr->setBdata(10);
    // basePtr->setDdata(20.5); // This line would cause a compilation error because setDdata is not a member of BClass
    // baseRef.setBdata(20);

    // Display values using the base-class pointer
    basePtr->display();
    // baseRef.display();

    // // Demonstrating dynamic_cast
    // DClass* dPtr = dynamic_cast<DClass*>(basePtr);
    // if (dPtr != nullptr) {
    //     dPtr->setDdata(20.5);
    //     dPtr->display();
    // }


    std::cout << "----------------------------------------" << std::endl;

    // Create a derived-class pointer pointing to a derived-class object
    DClass* derivedPtr{&dObj};

    derivedPtr->setBdata(30);
    derivedPtr->setDdata(40.5);

    // Display values using the derived-class pointer
    derivedPtr->display(); // This will call the display method of DClass

    return 0;
}