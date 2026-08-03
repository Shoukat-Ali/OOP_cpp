/**
 * The program is taken from the textbook and is an attempt to demonstrate 
 *      1. copy-and-paste 
 *      2. Inheritance (public and protected inheritance)
 * 
 * 
 */

#ifndef COMMISSION_EMPLOYEE_HPP
#define COMMISSION_EMPLOYEE_HPP

#include <string>

class CommissionEmployee {
public:
    CommissionEmployee(const std::string&, const std::string&, const std::string&, 
                        double = 0.0, double = 0.0);
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
    double earnings() const; // calculate earnings
    std::string toString() const; // create string representation
private:
    std::string firstName;
    std::string lastName;
    std::string CNICNumber;
    double grossSales; // gross weekly sales
    double commissionRate; // commission percentage
};
#endif