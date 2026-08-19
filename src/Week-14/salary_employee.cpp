#include <sstream>
#include <stdexcept>
#include <iomanip>
#include "../../header/Week-14/salary_employee.hpp"

SalaryEmployee::SalaryEmployee(const std::string& fn, const std::string& ln, 
                    const std::string& cnic, double s) : Employee{fn, ln, cnic} {
        setSalary(s);

}

void SalaryEmployee::setSalary(const double& s) {
    if (s <= 0.00) {
        throw std::invalid_argument("Invalid salary and should be > 0.00");
    }
    salary = s;
} 
    
double SalaryEmployee::getSalary() const {
    return salary;
} 
    
    
double SalaryEmployee::earnings() const {
    return getSalary();
}
    
std::string SalaryEmployee::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output  << "Salary Employee: " << Employee::toString()
            << "\nSalary: " << getSalary();
    return output.str();
} 