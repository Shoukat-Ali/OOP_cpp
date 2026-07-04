/**
 * This is an attempt to demonstrate the use of class header file that contains all definitions.
 * The class contains user defined constructor with one parameter to initialize the data member of the class.
 * To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -std=c++11 Acc_constructor.cpp -o test
 * 
 * Note: Since we are using VS Code IDE, therefore, the use of forward slash (/) for header file path works on Linux and Windows. 
 * Please sure that when you run the above GNU C++ command,  the terminal is set to PowerShell on Windows.
 * 
 */
#include <iostream>

#include "../../header/Week-5/Acc_constructor.hpp"      


using std::cout; using std::endl;

int main() {
    // create two Account objects
    Account account1{"Jane Green"};
    Account account2{"John Blue"};
    // Account account3;       // Error no constructor that takes no arguments
    
    // display initial value of name for each Account
    cout << "account1 name is: " << account1.getName() << endl;
    cout << "account2 name is: " << account2.getName() << endl;
}