/**
 * This is part of the demonstration to show abstract base class and pure virtual function in inheritance hierarchy.
 * We have concrete derived classes from the abstract base class.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 bd_class_test.cpp ../../src/Week-14/b_class.cpp ../../src/Week-14/d1_class.cpp ../../src/Week-14/d2_class.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 bd_class_test.cpp -o bd_class_test.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-13/b_class.cpp -o b_class.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-13/d1_class.cpp -o d1_class.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-13/d2_class.cpp -o d2_class.o
 *      g++ bd_class_test.o b_class.o d1_class.o d2_class.o -o test
 * 
 */

#include <iostream>
#include <vector>
#include "../../header/Week-14/b_class.hpp"
#include "../../header/Week-14/d1_class.hpp"
#include "../../header/Week-14/d2_class.hpp"

int main() {
    // BClass bObj;        // Error, BClass is abstract
    DClass1 d1Obj;
    DClass2 d2Obj;
    std::vector<BClass*> basePtr{&d1Obj, &d2Obj};
    
    // DClass1 setting data value
    d1Obj.setBdata(10);
    d1Obj.setDdata(12.55);

    // DClass2 setting data value
    d2Obj.setBdata(20);
    d2Obj.setDdata(100);

    for (auto bPtr: basePtr) {
        bPtr->display();
        bPtr->bd();
    }
    return 0;
}