/**
 * This program is part of inheritance demonstration using public inheritance.
 */

#ifndef BASEPLUSCOMS_PUBLIC_INHERITANCE_HPP
#define BASEPLUSCOMS_PUBLIC_INHERITANCE_HPP

#include <string>
#include "commission_emply.hpp"

class BasePlusCommissionEmployee : public CommissionEmployee {
public:
    BasePlusCommissionEmployee(const std::string&, const std::string&, const std::string&, 
                            double = 0.0, double = 0.0, double = 0.0);
    void setBaseSalary(double);	// set base salary
    double getBaseSalary() const;	// return base salary
    double earnings() const;		// calculate earnings
    std::string toString() const;	// create string representation
private:
    double baseSalary; // only ONE new data member needed!
};

#endif