/**
 * This example program is taken from the textbook to demonstrate the idea of static member function and static data member.
 */

#ifndef STATIC_EMPLOYEE_HPP
#define STATIC_EMPLOYEE_HPP

#include <string>

class Employee {
public:
    Employee(const std::string&, const std::string&); // constructor
    ~Employee(); // destructor
    std::string getFirstName() const; // return first name
    std::string getLastName() const; // return last name
    
    // static member function
    static unsigned int getCount(); // return # of objects instantiated

private:
    std::string firstName;
    std::string lastName;
    
    // static data
    static unsigned int count; // number of objects instantiated
};

#endif