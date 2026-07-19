/**
 * This program is an attempt to demonstrate operator overloading by taking cell phone number as input from user.
 * According to Wikipedia, in Pakistan, a mobile phone number has an 11-digit format: 03XZ-YYYYYYY where
 *      0: The prefix is for trunk (long-distance) dialling from within the country
 *      3: The Mobile Access code indicating it is a cell phone
 *      X: Identifies the specific service provider/network (e.g., Jazz, Telenor, Zong).
 *      Z: Z can be any value between 0 and 9, assigned by the operator itself
 *      Y: The last seven digits (YYYYYYY) are the unique subscriber number assigned to each mobile phone user.
 * 
 * For simplicity, we consider 03 and XZ as prefix and network service provider code, respectively.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 cell_phone_num_test.cpp ../../src/Week-11/cell_phone_num.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 cell_phone_num_test.cpp -o cell_phone_num_test.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-11/cell_phone_num.cpp -o cell_phone_num.o
 *      g++ cell_phone_num_test.o cell_phone_num.o -o test
 */

#include <iostream>
#include "../../header/Week-11/cell_phone_num.hpp"

int main() {
    CellPhoneNumber phone; // create object phone
    std::cout << "Enter phone number in the form 0333-1234567:" << std::endl;
    // cin >> phone invokes operator>> by implicitly issuing
    // the non-member function call operator>>(cin, phone)
    std::cin >> phone;
    std::cout << "\nThe phone number entered was:\n";
    // cout << phone invokes operator<< by implicitly issuing
    // the non-member function call operator<<(cout, phone)
    std::cout << phone << std::endl;
}