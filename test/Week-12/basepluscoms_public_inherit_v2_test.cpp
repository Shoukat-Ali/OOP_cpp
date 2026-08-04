/**
 * This program is part of inheritance demonstration using public inheritance.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 basepluscoms_public_inherit_v2_test.cpp ../../src/Week-12/basepluscoms_public_inherit_v2.cpp ../../src/Week-12/commission_emply_v2.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 basepluscoms_public_inherit_v2_test.cpp -o basepluscoms_public_inherit_v2_test.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-12/basepluscoms_public_inherit_v2.cpp -o basepluscoms_public_inherit_v2.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-12/commission_emply_v2.cpp -o commission_emply_v2.o
 *      g++ basepluscoms_public_inherit_v2_test.o basepluscoms_public_inherit_v2.o commission_emply_v2.o -o test
 * 
 */

#include <iostream>
#include <iomanip>
#include "../../header/Week-12/basepluscoms_public_inherit.hpp"

int main() {
    BasePlusCommissionEmployee employee{"Johny", "Jr.", "34201-1234567-1", 500, 0.1, 300};
    std::cout << std::fixed << std::setprecision(2);	// set floating-point formatting 
    std::cout << "Employee information obtained by get functions: \n"
	    << "\nFirst name is " << employee.getFirstName()
	    << "\nLast name is " << employee.getLastName()
	    << "\nCNIC number is " << employee.getCNICNumber()
	    << "\nGross sales is " << employee.getGrossSales()
	    << "\nCommission rate is " << employee.getCommissionRate()
	    << "\nBase salary is " << employee.getBaseSalary() << std::endl;
    
    employee.setBaseSalary(2000); // set base salary
    std::cout << "\nUpdated employee information from function toString: \n\n"
              << employee.toString();
    std::cout << "\n\nEmployee's earnings: $" << employee.earnings() << "\n";
    return 0;
}