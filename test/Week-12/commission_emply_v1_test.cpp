/**
 * The program is taken from the textbook and is an attempt to demonstrate 
 *      1. copy-and-paste 
 *      2. Inheritance (public and protected inheritance)
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 commission_emply_v1_test.cpp ../../src/Week-12/commission_emply_v1.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 commission_emply_v1_test.cpp -o commission_emply_v1_test.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-12/commission_emply_v1.cpp -o commission_emply_v1.o
 *      g++ commission_emply_v1_test.o commission_emply_v1.o -o test
 */

#include <iostream>
#include <iomanip>
#include "../../header/Week-12/commission_emply.hpp"

int main() {
    CommissionEmployee employee{"Sue", "Jones", "34201-1234567-1", 10000, 0.06};
    
    std::cout << std::fixed << std::setprecision(2); // set floating-point formatting
    std::cout << "Employee information obtained by get functions: \n"
	    << "\nFirst name: " << employee.getFirstName()
	    << "\nLast name: "  << employee.getLastName()
	    << "\nCNIC number: " << employee.getCNICNumber()
	    << "\nGross sales: " << employee.getGrossSales()
	    << "\nCommission rate: " << employee.getCommissionRate() << std::endl;
    
    employee.setGrossSales(8000); // set gross sales
    employee.setCommissionRate(0.1); // set commission rate
    std::cout << "\nUpdated employee information from function toString: \n\n"
	    << employee.toString();

    std::cout << "\n\nEmployee's earnings: $" << employee.earnings() << std::endl;
    return 0;
}