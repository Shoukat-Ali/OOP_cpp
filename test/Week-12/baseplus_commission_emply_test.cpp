/**
 * This program is part of the demonstration when copy-and-paste is used instead of inheritance.
 * Here, we are using copy-and-paste to create a new class BasePlusCommissionEmployee 
 * that has all the attributes of CommissionEmployee plus a base salary.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 baseplus_commission_emply_test.cpp ../../src/Week-12/baseplus_commission_emply.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 baseplus_commission_emply_test.cpp -o baseplus_commission_emply_test.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-12/baseplus_commission_emply.cpp -o baseplus_commission_emply.o
 *      g++ baseplus_commission_emply_test.o baseplus_commission_emply.o -o test
 * 
 */

#include <iostream>
#include <iomanip>
#include "../../header/Week-12/baseplus_commission_emply.hpp"

int main() {
    BasePlusCommissionEmployee employee{"Bob", "Lewis", "34201-1234567-1", 5000, 0.04, 300};
    std::cout << std::fixed << std::setprecision(2);	// set floating-point formatting 
    std::cout << "Employee information obtained by get functions: \n"
	    << "\nFirst name is " << employee.getFirstName()
	    << "\nLast name is " << employee.getLastName()
	    << "\nCNIC number is " << employee.getCNICNumber()
	    << "\nGross sales is " << employee.getGrossSales()
	    << "\nCommission rate is " << employee.getCommissionRate()
	    << "\nBase salary is " << employee.getBaseSalary() << std::endl;
    
    employee.setBaseSalary(1000); // set base salary
    std::cout << "\nUpdated employee information from function toString: \n\n"
              << employee.toString();
    std::cout << "\n\nEmployee's earnings: $" << employee.earnings() << "\n";
    return 0;
}