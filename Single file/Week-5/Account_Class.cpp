/**
 * This program is an attempt to demonstrate the use of classes in C++.
 * A class is a user-defined data type that represents an entity with attributes (data members) and behaviors (member functions).
 * The class serves as a blueprint for creating objects, which are instances of the class.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -std=c++11 Account_Class.cpp -o test
 */
#include <iostream>  
#include <string>    // to use C++ string data type

using std::cout; using std::cin; using std::endl; using std::string;

class Account {
public:
      // member function that sets the account name in the object
      void setName(string accountName) {
             name = accountName; // store the account name
      }
      // member function that retrieves the account name from the object
      string getName() const {
            return name; // return name's value to this function's caller
      }
private:
      string name; // data member containing account holder's name

}; // end class Account




int main() {
        Account myAccount; // create Account object myAccount
          
        // show that the initial value of myAccount's name is the empty string
        cout << "Initial account name is: " << myAccount.getName();
          
        // prompt for and read name
        cout << "\nPlease enter the account name: ";
          
        string theName;
        std::getline(cin, theName); // read a line of text
        myAccount.setName(theName); // put theName in myAccount
        
        // display the name stored in object myAccount
        cout << "Name in object myAccount is: " << myAccount.getName() << endl;
}