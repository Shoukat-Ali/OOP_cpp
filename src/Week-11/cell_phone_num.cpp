/**
 * 
 */

#include <iomanip>
#include "../../header/Week-11/cell_phone_num.hpp"

// overloaded stream insertion operator; cannot be a member function
// if we would like to invoke it with cout << cellNumber;
std::ostream& operator<<(std::ostream& output, const CellPhoneNumber& number) {
    output  << "Prefix: " << number.prefix 
            << "\nService Provider: " << number.serviceProvider 
            << "\nSubscriber Number: " << number.subscriberNumber << "\n"
            << number.prefix << number.serviceProvider << "-" << number.subscriberNumber << "\n";
    return output; // enables cout << a << b << c;
}

// overloaded stream extraction operator; cannot be a member function
// if we would like to invoke it with cin >> cellNumber;
std::istream& operator>>(std::istream& input, CellPhoneNumber& number) {
    input >> std::setw(2) >> number.prefix;
    input >> std::setw(2) >> number.serviceProvider; // input network service provider
    input.ignore(); // skip - or space
    input >> std::setw(7) >> number.subscriberNumber; // input subscriber number
    
    return input; // enables cin >> a >> b >> c;
}

