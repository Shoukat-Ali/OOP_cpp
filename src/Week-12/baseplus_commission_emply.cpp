#include <iostream>
#include <sstream>
#include <iomanip>
#include "../../header/Week-12/baseplus_commission_emply.hpp"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const std::string& first, const std::string& last, 
			                                const std::string& cnic, double sales, double rate, double salary) { 
    firstName = first;	        // Should be validated
    lastName = last;	        // Should be validated 
    CNICNumber = cnic;	        // Should be validated 
    setGrossSales(sales);	    // validate and store
    setCommissionRate(rate);	// validate and store
    setBaseSalary(salary);      // validate and store
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
    return baseSalary + (commissionRate * grossSales);
}

std::string BasePlusCommissionEmployee::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2); // two digits of precision
    output  << "base-salaried commission employee: " << firstName << " " << lastName 
            << "\nCNIC number: " << CNICNumber
	        << "\ngross sales: " << grossSales
	        << "\ncommission rate: " << commissionRate
	        << "\nbase salary: " << baseSalary;
    return output.str();
}

void BasePlusCommissionEmployee::setGrossSales(double sales) {
    if (sales < 0.0) {
        throw std::invalid_argument("Gross sales must be >= 0.0");
    }
    grossSales = sales;
}


double BasePlusCommissionEmployee::getGrossSales() const {
    return grossSales;
}

void BasePlusCommissionEmployee::setCommissionRate(double rate) {
    if (rate <= 0.0 || rate >= 1.0) {
        throw std::invalid_argument("Commission rate must be > 0.0 and < 1.0");
    }
    commissionRate = rate;
}


double BasePlusCommissionEmployee::getCommissionRate() const {
    return commissionRate;
}


void BasePlusCommissionEmployee::setFirstName(const std::string& first) {
    firstName = first; // should validate
}


std::string BasePlusCommissionEmployee::getFirstName() const {
    return firstName;
}


void BasePlusCommissionEmployee::setLastName(const std::string& last) {
    lastName = last; // should validate
}

std::string BasePlusCommissionEmployee::getLastName() const {
    return lastName;
}

void BasePlusCommissionEmployee::setCNICNumber(const std::string& cnic) {
    CNICNumber = cnic; // should validate
}


std::string BasePlusCommissionEmployee::getCNICNumber() const {
    return CNICNumber;
}
