/**
 * This is an attempt to demonstrate the use of class header file that contains all definitions.
 * The class defines a constructor with two parameters to initialize the data members of the class and 
 * different member functions to perform operations on the account balance.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -std=c++11 Acc_balance.cpp -o test
 * 
 * Note: Since we are using VS Code IDE, therefore, the use of forward slash (/) for header file path works on Linux and Windows. 
 * Please sure that when you run the above GNU C++ command,  the terminal is set to PowerShell on Windows.
 */

#include <iostream>
#include "../../header/Week-5/Acc_balance.hpp"

// void displayAccount(const Account&);


int main() {
    using std::cout; using std::cin; using std::endl;

    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
//     Account account3{"John Blue"};
//     Account account4;
    
    // display initial balance of each object
    cout << "account1: " << account1.getName() << " balance is $" 
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance();
    
    cout << "\n\nEnter deposit amount for account1: "; // prompt
    double depositAmount;
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount); // add to account1's balance
    
    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance();
    
    cout << "\n\nEnter deposit amount for account2: "; // prompt
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount); // add to account2 balance
    
    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance() << endl;
         
    return 0;
}


// Display a Account's name and balance
void displayAccount(const Account& accountToDisplay) {
    std::cout << accountToDisplay.getName() << " balance is $"
              << accountToDisplay.getBalance() << std::endl;
}