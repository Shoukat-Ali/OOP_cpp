/**
 * This example is taken from the textbook to demonstrate composition/aggregation.
 */

#include <array>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "../../header/Week-9/date.hpp"

// constructor confirms proper value for month; calls
// utility function checkDay to confirm proper value for day
Date::Date(unsigned int mn, unsigned int dy, unsigned int yr) : month{mn}, day{checkDay(dy)}, year{yr} {
    if (mn < 1 || mn > monthsPerYear) { // validate the month
        throw std::invalid_argument("month must be 1-12");
    }
    // output Date object to show when its constructor is called
    std::cout << "Date object constructor for date " << toString() << std::endl;
}

// print Date object in form month/day/year
std::string Date::toString() const {
    // create string in the form month/day/year using 
    // Technique-1: class std::ostringstream 
    // std::ostringstream output;
    // output << month << '/' << day << '/' << year;
    // return output.str();
    // Technique-2: class std::string
    std::string output; 
    output = std::to_string(month) + '/' + std::to_string(day) + '/' + std::to_string(year);
    // output.append(std::to_string(month));
    // output.append("/"); 
    // output.append(std::to_string(day));
    // output.append("/"); 
    // output.append(std::to_string(year));
    return output;

}

// output Date object to show when its destructor is called
Date::~Date() {
    std::cout << "Date object destructor for date " << toString() << std::endl;
}

// utility function to confirm proper day value based on
// month and year; handles leap years, too
unsigned int Date::checkDay(int testDay) const {
    static const std::array<int, monthsPerYear + 1> daysPerMonth{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // determine whether testDay is valid for specified month
    if (testDay > 0 && testDay <= daysPerMonth[month]) {
        return testDay;
    }
    // February 29 check for leap year
    if (month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
        return testDay;
    }
    throw std::invalid_argument("Invalid day for current month and year");
}
