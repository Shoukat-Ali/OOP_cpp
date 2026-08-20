#include <iostream>
#include <sstream>
#include <stdexcept>
#include <iomanip>
#include "../../header/Week-14/salarypluscommission_employee.hpp"


SalaryPlusCommissionEmployee::SalaryPlusCommissionEmployee(const std::string& fn, const std::string& ln, 
                                const std::string& cnic, double sale, double rate, double sly) 
                                : CommissionEmployee(fn, ln, cnic, sale, rate) {
        std::cout << "Salary Plus Commission Employee constructor\n";
        setSalary(sly);

}


SalaryPlusCommissionEmployee::~SalaryPlusCommissionEmployee() {
    std::cout << "Salary Plus Commission Employee destructor\n";
    salary = 0.00;
}

    
void SalaryPlusCommissionEmployee::setSalary(const double& sly) {
    if (sly <= 0.0) {
        throw std::invalid_argument("Salary must be greater than 0.00");
    }
    salary = sly;
} 
    
double SalaryPlusCommissionEmployee::getSalary() const {
    return salary;
}
    
    
double SalaryPlusCommissionEmployee::earnings() const {
    return getSalary() + CommissionEmployee::earnings();
}

    
std::string SalaryPlusCommissionEmployee::toString() const {
    std::ostringstream output;
    output  << std::fixed << std::setprecision(2) 
            << "Salary plus " << CommissionEmployee::toString()
            << "\nSalary : " << getSalary();
    return output.str();
}