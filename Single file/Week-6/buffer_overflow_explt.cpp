/**
 * This is an attempt to demonstrate a simple buffer overflow vulnerability in C++. 
 * The program defines a structure `Demo` with a character buffer and an integer flag. 
 * The user is prompted to enter a password, and if the input exceeds the buffer size, 
 * it can overwrite the adjacent memory, including the access flag which should not happen.
 *  
 * To compile and create an executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 buffer_overflow_explt.cpp -o test
 */

#include <iostream>
#include <cstring>

struct Demo {
    char buffer[8];
    int accessFlag{0}; // A flag to check if the user is authenticated (0 = No, Other values = Yes)
};


void vulnerableFunction() {
    Demo myDemo; 

    std::cout << "Enter the password: ";
    
    // CRITICAL VULNERABILITY: std::cin >> buffer does not limit input size.
    // If the user types more than 7 characters, it overflows into adjacent memory.
    std::cin >> myDemo.buffer; 

    // std::cout << "\n[Buffer Content]: " << myDemo.buffer << std::endl;
    std::cout << "[Access Flag Value]: " << myDemo.accessFlag << std::endl;

    // Check if the flag was altered
    if (myDemo.accessFlag != 0) {
        std::cout << "\n[Exploit Success]: Access Granted! The flag was corrupted.\n";
    } else {
        std::cout << "\nAccess Denied.\n";
    }
}

int main() {
    vulnerableFunction();
    return 0;
}