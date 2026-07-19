/**
 * This program is an attempt to demonstrate operator overloading by taking cell phone number as input from user.
 * According to Wikipedia, in Pakistan, a mobile phone number has an 11-digit format: 03XZ-YYYYYYY where
 *      0: The prefix is for trunk (long-distance) dialling from within the country
 *      3: The Mobile Access code indicating it is a cell phone
 *      X: Identifies the specific service provider/network (e.g., Jazz, Telenor, Zong).
 *      Z: Z can be any value between 0 and 9, assigned by the operator itself
 *      Y: The last seven digits (YYYYYYY) are the unique subscriber number assigned to each mobile phone user.
 * 
 */

#ifndef CELL_PHONE_NUMBER_HPP
#define CELL_PHONE_NUMBER_HPP

#include <iostream>
#include <string>

class CellPhoneNumber {
    friend std::ostream& operator<<(std::ostream&, const CellPhoneNumber&);
    friend std::istream& operator>>(std::istream&, CellPhoneNumber&);
private:
    std::string prefix{"03"}; // 03 is fixed prefix for cell phone numbers in Pakistan
    std::string serviceProvider; // For simplicity, let's use a 2-digit service provider code e.g., XZ
    std::string subscriberNumber; // 7-digit subscriber number
};
#endif