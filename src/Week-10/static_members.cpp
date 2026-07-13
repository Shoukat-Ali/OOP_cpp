/**
 * This example program is taken from the textbook to demonstrate the idea of static member function and static data member.
 */

#include <iostream>
#include "../../header/Week-10/static_members.hpp"

// define and initialize static data member at global namespace scope
unsigned int Employee::count{0}; // cannot include keyword static

// define static member function that returns number of
// Employee objects instantiated (declared static in Employee.h)
unsigned int Employee::getCount() {
    return count;
}

// constructor initializes non-static data members and
// increments static data member count
Employee::Employee(const std::string& first, const std::string& last) : firstName(first), lastName(last) {
    ++count; // increment static count of employees
    std::cout << "Employee constructor for " << firstName << ' ' << lastName << " called." << std::endl;
}

// destructor decrements the count
Employee::~Employee() {
    std::cout << "~Employee() called for " << firstName << ' ' << lastName << std::endl;
    --count; // decrement static count of employees
}

// return first name of employee
std::string Employee::getFirstName() const {
    return firstName;
}

// return last name of employee
std::string Employee::getLastName() const {
    return lastName;
}