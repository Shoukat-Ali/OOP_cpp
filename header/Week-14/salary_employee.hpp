/**
 * This is an attempt to demonstrate abstract classes and pure virtual function based on the example from the textbook.
 * This class is a concrete derived class publicly inherited from Employee class.
 * The class has salary data and the rest is inherited from the Employee class.
 * 
 */

#ifndef SALARY_EMPLOYEE_HPP
#define SALARY_EMPLOYEE_HPP

#include "employee.hpp"

class SalaryEmployee : public Employee {
public:
    SalaryEmployee(const std::string&, const std::string&, const std::string&,
                    double = 0.0);
    virtual ~SalaryEmployee() = default;
    // virtual ~SalaryEmployee();

    void setSalary(const double&); 
    double getSalary() const; 
    
    virtual double earnings() const override;
    virtual std::string toString() const override; 

private:
    double salary;
};
#endif