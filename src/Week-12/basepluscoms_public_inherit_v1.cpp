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
    return baseSalary + (commissionRate * grossSales);
}


std::string BasePlusCommissionEmployee::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2); // two digits of precision
    // derived class cannot access the base classs private data
    // Therefore, please change the private to protected in the CommissionEmployee class
    output  << "Salary employee: " << firstName << " " << lastName
	        << "\nCNIC number: " << CNICNumber << "\ngross sales: " 
	        << grossSales << "\ncommission rate: " << commissionRate
	        << "\nbase salary: " << baseSalary;
    return output.str();
}