/**
 * This is an attempt to demonstrate abstract classes and pure virtual function based on the example from the textbook.
 * This class is abstract class
 * 
 * 
 */

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>

class Employee {
public:
    Employee(const std::string&, const std::string&, const std::string&);
    virtual ~Employee() = default;

    void setFirstName(const std::string&); 
    std::string getFirstName() const; 
    void setLastName(const std::string&); 
    std::string getLastName() const; 
    void setCNICNumber(const std::string&); 
    std::string getCNICNumber() const;

    virtual double earnings() const = 0; // pure vitural function
    virtual std::string toString() const; // create string representation

private:
    std::string firstName;
    std::string lastName;
    std::string CNICNumber;
};
#endif