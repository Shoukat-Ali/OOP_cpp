/**
 * This is an attempt to demonstrate the use of class header file that contains all definitions.
 * The class contains user defined constructor with one parameter to initialize the data member of the class.
 * 
 * Note: Since we are using VS Code IDE, therefore, the use of forward slash (/) for header file path works on Linux and Windows. 
 * Please sure that when you run the above GNU C++ command,  the terminal is set to PowerShell on Windows.
 * 
 * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 Acc_const_test.cpp ../../src/Week-9/Acc_const.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 -c ../../src/Week-9/Acc_const.cpp -o Acc_const.o
 *      g++ -Wall -Werror -std=c++11 -c Acc_const_test.cpp -o Acc_const_test.o
 *      g++ -Wall -Werror -std=c++11 Acc_const.o Acc_const_test.o -o test
 * 
 */
#include <iostream>

#include "../../header/Week-9/Acc_const.hpp"


using std::cout; using std::endl;

int main() {
    // create two Account objects
    Account account1{"Jane Green"};
    Account account2;

    // create a reference to account1 (note: no new Account object is created)
    Account& account1Ref{account1};
    // create a pointer to account1
    Account* accountPtr{nullptr};
    
    // display initial value of name for each Account
    cout << "account1 name is: " << account1.getName() << endl;
    cout << "account2 name is: " << account2.getName() << endl;

    // setting name using reference to account1
    account1Ref.setName("Willams Jr.");
    cout << "account1 name is: " << account1Ref.getName() << endl;
    // setting name using pointer to account2
    accountPtr = &account2;
    accountPtr->setName("David Smith");
    cout << "account2 name is: " << accountPtr->getName() << endl;
}