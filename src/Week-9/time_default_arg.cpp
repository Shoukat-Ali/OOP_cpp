/**
 * The is example is taken from the textbook to demonstrate default arguments and default constructor.
 */

#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "../../header/Week-9/time_default_arg.hpp" //Forward slash for header path works on Linux and Windows in VS Code

// Time constructor initializes each data member
Time::Time(int hour, int minute, int second) {
    setTime(hour, minute, second); // validate and set time
}

// set new Time value using universal time
void Time::setTime(int h, int m, int s) {
    setHour(h); // set private field hour
    setMinute(m); // set private field minute
    setSecond(s); // set private field second
}

// set hour value
void Time::setHour(int h) {
    if (h >= 0 && h < 24) {
        hour = h;
    }
    else {
        throw std::invalid_argument("hour must be 0-23");
    }
}

// set minute value
void Time::setMinute(int m) {
    if (m >= 0 && m < 60) {
        minute = m;
    }
    else {
        throw std::invalid_argument("minute must be 0-59");
    }
}

// set second value
void Time::setSecond(int s) {
    if (s >= 0 && s < 60) {
        second = s;
    }
    else {
        throw std::invalid_argument("second must be 0-59");
    }
}

// return hour value
unsigned int Time::getHour() const {
    return hour;
}

// return minute value
unsigned int Time::getMinute() const {
    return minute;
}

// return second value
unsigned int Time::getSecond() const {
    return second;
}

// return Time as a string in universal-time format (HH:MM:SS)
std::string Time::toUniversalString() const {
    /**create string in the form hour:minute:second using 
     * Technique-1: class std::ostringstream */
    std::ostringstream output;
    output  << std::setfill('0') << std::setw(2) << getHour() << ":"
            << std::setw(2) << getMinute() << ":" 
            << std::setw(2) << getSecond();
    return output.str();
    /**Technique-2: class std::string and std::to_string() function
     * Note that std::to_string() converts numeric value to string.
     */
    // std::string output; 
    // output = std::to_string(getHour()) + ':' + std::to_string(getMinute()) + ':' + std::to_string(getSecond());
    // return output;
}

// return Time as string in standard-time format (HH:MM:SS AM or PM)
std::string Time::toStandardString() const {
    std::ostringstream output;
    output  << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
            << ":" << std::setfill('0') << std::setw(2) << getMinute() << ":" 
            << std::setw(2) << getSecond() << (hour < 12 ? " AM" : " PM");
    return output.str();
}