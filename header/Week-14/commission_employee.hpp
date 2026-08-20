/**
 * This is an attempt to demonstrate abstract classes and pure virtual function based on the example from the textbook.
 * This class is a concrete derived class publicly inherited from Employee class.
 * The class has comission rate and gross sale data while the rest are inherited from the Employee class
 * 
 */

#ifndef COMMISSION_EMPLOYEE_HPP
#define COMMISSION_EMPLOYEE_HPP

#include "employee.hpp"

class CommissionEmployee : public Employee {
public:
    CommissionEmployee(const std::string&, const std::string&, const std::string&, 
                        double = 0.0, double = 0.0);
    // virtual ~CommissionEmployee() = default;
    virtual ~CommissionEmployee();

    void setGrossSales(const double&); 
    double getGrossSales() const; 
    void setCommissionRate(const double&); 
    double getCommissionRate() const;
    
    virtual double earnings() const override; 
    virtual std::string toString() const override; 

private:
    double grossSales; // gross weekly sales
    double commissionRate; // commission percentage
};
#endif