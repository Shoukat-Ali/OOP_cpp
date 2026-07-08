/**
 * This example is taken from the textbook to demonstrate the danger of breaking encapsulation 
 * by returning a reference to a private data member of a class.
 */

#include <stdexcept>
#include "../../header/Week-9/break_encapsulation.hpp"

// set values of hour, minute and second
void Time::setTime(int h, int m, int s) {
    // validate hour, minute and second
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)) {
        hour = h;
        minute = m;
        second = s;
    }
    else {
        throw std::invalid_argument("hour, minute and/or second was out of range");
    }
}

// return hour value
unsigned int Time::getHour() const {
    return hour;
}

// poor practice: returning a reference to a private data member.
unsigned int& Time::badSetHour(int hh) {
    if (hh >= 0 && hh < 24) {
        hour = hh;
    }
    else {
        throw std::invalid_argument("hour must be 0-23");
    }
    return hour; // dangerous reference return
}