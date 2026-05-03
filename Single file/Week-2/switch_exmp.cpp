/**
 * This is an attempt to demonstrate the use of switch statements in C++. 
 * The switch statement allows for a variable to be tested for equality against a list of values, 
 * each with its own block of code to execute.  
 * To compile and create executable of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 switch_exmp.cpp -o test 
 */

#include <iostream>


int main() 
{
    int day;
    
    std::cout << "Enter a number between 1 and 7: ";
    std::cin >> day;
    
    switch (day) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        case 4:
            std::cout << "Thursday" << std::endl;
            break;
        case 5:
            std::cout << "Friday" << std::endl;
            break;
        case 6:
            std::cout << "Saturday" << std::endl;
            break;
        case 7:
            std::cout << "Sunday" << std::endl;
            break;
        default:
            std::cout << "Invalid input" << std::endl;
    }
    
    return 0;
}