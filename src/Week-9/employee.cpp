/**
 * This example is taken from the textbook to demonstrate composition/aggregation using 
 * Date class object as data member.
 */

#include <iostream>
#include <sstream>
#include "../../header/Week-9/employee.hpp" // Employee class definition
#include "../../header/Week-9/date.hpp" // Date class definition

// constructor uses member initializer list to pass initializer
// values to constructors of member objects
Employee::Employee(const std::string& first, const std::string& last, 
                   const Date &dateOfBirth, const Date &dateOfHire)
                   : firstName{first}, // initialize firstName
                     lastName{last}, // initialize lastName
                     birthDate{dateOfBirth}, // initialize birthDate
                     hireDate{dateOfHire} 
{ 
    // initialize hireDate
    // output Employee object to show when constructor is called
    std::cout << "Employee object constructor: " << firstName << ' ' << lastName << std::endl;
}


// print Employee object
std::string Employee::toString() const {
    std::ostringstream output;
    output  << lastName << ", " << firstName << " Hired: "
            << hireDate.toString() << " Birthday: " << birthDate.toString();
    return output.str();
}


// output Employee object to show when its destructor is called
Employee::~Employee() {
    std::cout << "Employee object destructor: "
              << lastName << ", " << firstName << std::endl;
}