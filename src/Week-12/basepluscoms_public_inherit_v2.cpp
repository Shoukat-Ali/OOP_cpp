/**
 * The is second version (v2) of the BasePlusCommissionEmployee class implementation file where the good practice 
 * of software engineering is followed. In this version, we access the data member via the public members functions only 
 * in order to localize the changes in the class implementation file. In other words, some optimization is left to compiler.
 * 
 * Note that, no changes are needed in the header file ../../header/Week-12/basepluscoms_public_inherit.hpp
 * 
 */

#include <iostream>
#include <sstream>
#include <iomanip>
#include "../../header/Week-12/basepluscoms_public_inherit.hpp"


BasePlusCommissionEmployee::BasePlusCommissionEmployee(const std::string& first, 
                                                        const std::string& last, 
                                                        const std::string& cnic, 
                                                        double sales, double rate, double salary)
				: CommissionEmployee(first, last, cnic,	sales, rate) //explicitly call base-class constructor
                {
                    setBaseSalary(salary); // validate and store base salary
}


void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    if (salary < 0.0) {
        throw std::invalid_argument("Base salary must be >= 0.0");
    }
    baseSalary = salary;
}


double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}


double BasePlusCommissionEmployee::earnings() const {
    // derived class cannot access the base classs private data
    // Therefore, please change the private to protected in the CommissionEmployee class 
    return baseSalary + CommissionEmployee::earnings();
}


std::string BasePlusCommissionEmployee::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2); // two digits of precision
    // derived class cannot access the base classs private data
    // Therefore, please change the private to protected in the CommissionEmployee class
    output  << "Salary employee: " << CommissionEmployee::toString()
	        << "\nbase salary: " << getBaseSalary();
    return output.str();
}