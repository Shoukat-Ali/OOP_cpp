/**
 * This is an attempt to demonstrate abstract classes and pure virtual function based on the example from the textbook.
 * This class is a concrete derived class publicly inherited from CommisionEmployee class.
 * The class has salary data member and inherits comission rate and gross sale from the CommissionEmployee class
 * 
 */

#ifndef SALARYPLUSCOMMISSION_EMPLOYEE_HPP
#define SALARYPLUSCOMMISSION_EMPLOYEE_HPP

#include "commission_employee.hpp"

class SalaryPlusCommissionEmployee : public CommissionEmployee {
public:
    SalaryPlusCommissionEmployee(const std::string&, const std::string&, const std::string&, 
                        double = 0.0, double = 0.0, double = 0.0);
    // virtual ~SalaryPlusCommissionEmployee() = default;
    virtual ~SalaryPlusCommissionEmployee();

    void setSalary(const double&); 
    double getSalary() const;
    
    virtual double earnings() const override; 
    virtual std::string toString() const override; 

private:
    double salary; 
};
#endif