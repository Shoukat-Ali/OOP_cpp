/**
 * This example is taken from the textbook to demonstrate the danger of breaking encapsulation 
 * by returning a reference to a private data member of a class.
 */

#ifndef TIME_HPP
#define TIME_HPP

class Time {
public:
    void setTime(int, int, int);
    unsigned int getHour() const;
    unsigned int& badSetHour(int); // dangerous reference return
private:
    unsigned int hour{0};
    unsigned int minute{0};
    unsigned int second{0};
};

#endif