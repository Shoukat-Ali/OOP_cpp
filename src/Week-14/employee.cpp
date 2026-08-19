#include <stdexcept>
#include "../../header/Week-14/employee.hpp"

Employee::Employee(const std::string& fn, const std::string& ln, const std::string& cnic) {
    setFirstName(fn);
    setLastName(ln);
    setCNICNumber(cnic);
}

void Employee::setFirstName(const std::string& fn) {
    if (fn == "") {
        throw std::invalid_argument("First Name cannot be empty");
    }
    firstName = fn;
} 
    
std::string Employee::getFirstName() const {
    return firstName;
} 
    
void Employee::setLastName(const std::string& ln) {
    if (ln == "") {
        throw std::invalid_argument("Last Name cannot be empty");
    }
    lastName = ln;
} 
    
std::string Employee::getLastName() const {
    return lastName;
} 
    
void Employee::setCNICNumber(const std::string& cnic) {
    const unsigned int cnicLen = 15;
    const unsigned int dashIndx = 5;
    // For CNIC, we have 5 digits + 1 dash + 7 digits + 1 dash + 1 digit = 15
    if (cnic.length() != cnicLen) {
        throw std::invalid_argument("Invalid CNIC length");
    }

    for (unsigned int i = 0; i < cnicLen; ++i) {
        if (i == dashIndx || i == (dashIndx + 8)) {
            // Must be a dash '-'
            if (cnic[i] != '-') {
                throw std::invalid_argument("CNIC format should have dashes");
            }
        } else {
            // Must be a digit ('0' through '9')
            if (!isdigit(cnic[i])) {
                throw std::invalid_argument("CNIC number must be digit");
            }
        }
    }
    CNICNumber = cnic;
} 
    
std::string Employee::getCNICNumber() const {
    return CNICNumber;
}

std::string Employee::toString() const {
    return firstName + " " + lastName + "\nCNIC no.: " + CNICNumber;
}