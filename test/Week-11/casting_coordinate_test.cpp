/**
 * This is an attempt to demonstrate type conversion implicitly and explicity using cast operator.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 casting_coordinate_test.cpp ../../src/Week-11/casting_coordinate.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 casting_coordinate_test.cpp -o casting_coordinate_test.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-11/casting_coordinate.cpp -o casting_coordinate.o
 *      g++ casting_coordinate_test.o casting_coordinate.o -o test
 * 
 */

#include <iostream>
#include <stdexcept>
#include "../../header/Week-11/casting_coordinate.hpp"

int main() {
    Coordinate point;
    // Coordinate point{1, 2};
    // std::string coordStr = point;       // Error, implicit conversion
    std::string coordStr = static_cast<std::string>(point);
    std::cout << "Explicit object casting to string: " << coordStr << std::endl;

    double coordDiv{1.1};
    
    try {
        coordDiv = point;        // implicit type conversion
        // coordDiv = static_cast<double>(point);       // explicit type conversion
        std::cout << "Implict object conversion to double: " << coordDiv << std::endl;
    }
    catch (std::invalid_argument& e) {
        std::cout << "Exception :: " << e.what() << std::endl;
    }
    std::cout << "The coordDive value: " << coordDiv << std::endl;

    return 0;

}