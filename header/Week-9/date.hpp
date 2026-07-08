/**
 * This example is taken from the textbook to demonstrate composition/aggregation.
 */

#include <string>

#ifndef DATE_HPP
#define DATE_HPP

class Date {
public:
    static const unsigned int monthsPerYear{12}; // months in a year
    explicit Date(unsigned int = 1, unsigned int = 1, unsigned int = 1900);
    std::string toString() const; // date string in month/day/year format
    ~Date(); // provided to confirm destruction order

private:
    unsigned int month; // 1-12 (January-December)
    unsigned int day; // 1-31 based on month
    unsigned int year; // any year
    
    // utility/helper function to check if day is proper for month and year
    unsigned int checkDay(int) const;
};
#endif