#include <string>

class Account {
public:
    // constructor with two parameters
    Account(std::string accountName, double initialBalance) : name{accountName} { 
        if (initialBalance > 0.0) {
            balance = initialBalance;
        }
    }

    // function that deposits (adds) only a valid amount to the balance
    void deposit(double depositAmount) {
        if (depositAmount > 0.0) { // if the depositAmount is valid
            balance = balance + depositAmount; // add it to the balance
        }
    }

    // function returns the account balance
    double getBalance() const {
        return balance;
    }

    // member function that sets the account name in the object
    void setName(std::string accountName) {
        name = accountName; // store the account name
    }

    // member function that retrieves the account name from the object
    std::string getName() const {
        return name; // return name's value to this function's caller
    }

private:
    std::string name; // data member containing account holder's name
    double balance{0.0}; // C++11 in-class initialization
};