#include <iostream>
#include <sstream>
#include <iomanip>
#include "../../header/Week-12/commission_emply.hpp"

CommissionEmployee::CommissionEmployee(const std::string& first, const std::string& last, 
			                            const std::string& cnic, double sales, double rate) { 
    firstName = first;	// Should be validated
    lastName = last;	// Should be validated 
    CNICNumber = cnic;	// Should be validated 
    setGrossSales(sales);	// validate and store
    setCommissionRate(rate);	// validate and store
}

void CommissionEmployee::setGrossSales(double sales) {
    if (sales < 0.0) {
        throw std::invalid_argument("Gross sales must be >= 0.0");
    }
    grossSales = sales;
}

double CommissionEmployee::getGrossSales() const {
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate) {
    if (rate <= 0.0 || rate >= 1.0) {
        throw std::invalid_argument("Commission rate must be > 0.0 and < 1.0");
    }
    commissionRate = rate;
}


double CommissionEmployee::getCommissionRate() const {
    return commissionRate;
}


void CommissionEmployee::setFirstName(const std::string& first) {
    firstName = first; // should validate
}


std::string CommissionEmployee::getFirstName() const {
    return firstName;
}


void CommissionEmployee::setLastName(const std::string& last) {
    lastName = last; // should validate
}

std::string CommissionEmployee::getLastName() const {
    return lastName;
}

void CommissionEmployee::setCNICNumber(const std::string& cnic) {
    CNICNumber = cnic; // should validate
}


std::string CommissionEmployee::getCNICNumber() const {
    return CNICNumber;
}

double CommissionEmployee::earnings() const {
    return commissionRate * grossSales;
}

std::string CommissionEmployee::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2); // two digits of precision
    output  << "commission employee: " << firstName << " " << lastName 
            << "\nCNIC number: " << CNICNumber
	        << "\ngross sales: " << grossSales
	        << "\ncommission rate: " << commissionRate;
    return output.str();
}