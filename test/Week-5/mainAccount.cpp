/**
 * This is an attempt to demonstrate the use of class header file that contains definitions.
 * A class is a user-defined data type that represents an entity with attributes (data members) and behaviors (member functions).
 * The class serves as a blueprint for creating objects, which are instances of the class.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -std=c++11 mainAccount.cpp -o test
 */
#include <iostream>
#include <string>
#include "../../header/Week-5/Account.hpp"


using std::cout; using std::endl;

int main() {
        Account myAccount; // create Account object myAccount
          
        // show that the initial value of myAccount's name is the empty string
        cout << "Initial account name is: " << myAccount.getName();
          
        // prompt for and read name
        cout << "\nPlease enter the account name: ";
          
        std::string theName;
        // std::string myName{""};
        // cout << "Before" << myName << "after" << endl;
        std::getline(std::cin, theName); // read a line of text
        myAccount.setName(theName); // put theName in myAccount
        // myAccount.name = theName; // put theName in myAccount
        
        // display the name stored in object myAccount
        cout << "Name in object myAccount is: " << myAccount.getName() << endl;
}