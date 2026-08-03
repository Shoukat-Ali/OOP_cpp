/**
 * This program is part of the demonstration when copy-and-paste is used instead of inheritance.
 * Here, we are using copy-and-paste to create a new class BasePlusCommissionEmployee 
 * that has all the attributes of CommissionEmployee plus a base salary.
 */

#ifndef BASEPLUS_COMMISSION_EMPLOYEE_HPP
#define BASEPLUS_COMMISSION_EMPLOYEE_HPP

#include <string>

class BasePlusCommissionEmployee {
public:
    BasePlusCommissionEmployee(const std::string&, const std::string&, const std::string&, 
                                double = 0.0, double = 0.0, double = 0.0);
    void setFirstName(const std::string&); 
    std::string getFirstName() const; 
    void setLastName(const std::string&); 
    std::string getLastName() const; 
    void setCNICNumber(const std::string&); 
    std::string getCNICNumber() const;
    void setGrossSales(double); 
    double getGrossSales() const; 
    void setCommissionRate(double); 
    double getCommissionRate() const; 
    
    void setBaseSalary(double); 
    double getBaseSalary() const; 
    double earnings() const; 
    std::string toString() const; 
private:
    std::string firstName;
    std::string lastName;
    std::string CNICNumber;
    double grossSales; // gross weekly sales
    double commissionRate; // commission percentage
    double baseSalary; // base salary
};
#endif