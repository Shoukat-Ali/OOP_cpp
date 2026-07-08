/**
 * This example is taken from the textbook to demonstrate composition/aggregation using 
 * Date class object as data member.
 */

#include <string>

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include "date.hpp" // include Date class definition

class Employee {
public:
    Employee(const std::string&, const std::string&, const Date&, const Date&);
    std::string toString() const;
    ~Employee(); // provided to confirm destruction order
    
private:
    std::string firstName; // composition: member object
    std::string lastName; // composition: member object
    const Date birthDate; // composition: member object
    const Date hireDate; // composition: member object
};
#endif