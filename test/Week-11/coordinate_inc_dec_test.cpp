/**
 * This is an attempt to demonstrate the overloading of increment and decrement operators using objects.
 * Since the object can be incremented and decremented, therefore, exception is thrown for overflow and underflow.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 coordinate_inc_dec_test.cpp ../../src/Week-11/coordinate_inc_dec.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 coordinate_inc_dec_test.cpp -o coordinate_inc_dec_test.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-11/coordinate_inc_dec.cpp -o coordinate_inc_dec.o
 *      g++ coordinate_inc_dec_test.o coordinate_inc_dec.o -o test
 * 
 */

#include <iostream>
#include <stdexcept>
#include "../../header/Week-11/coordinate_inc_dec.hpp"

int main() {
    Coordinate point;
    std::cout << "Initial Value:" << std::endl;
    point.display();
    std::cout << "-----------------------" << std::endl;

    // Demonstration of Prefix Increment
    std::cout << "Prefix Increment (++obj):" << std::endl;
    ++point;
    point.display();
    std::cout << "-----------------------" << std::endl;
    
    // Demonstration of Postfix Increment
    std::cout << "\nPostfix Increment (obj++):" << std::endl;
    Coordinate postInc = point++;
    std::cout << "Before update:\n";
    postInc.display(); // Value before increment
    std::cout << "Updated point:\n";
    point.display();        // Value after increment
    std::cout << "-----------------------" << std::endl;

    // Demonstration of Prefix Decrement
    std::cout << "Postfix Deccrement (--obj):" << std::endl;
    --point;
    point.display();
    std::cout << "-----------------------" << std::endl;
    
    // Demonstration of Postfix Decrement
    std::cout << "\nPostfix Decrement (obj--):" << std::endl;
    Coordinate postDec = point--;
    std::cout << "Before update:\n";
    postDec.display(); // Value before increment
    std::cout << "Updated point:\n";
    point.display();        // Value after increment
    std::cout << "-----------------------" << std::endl;

}