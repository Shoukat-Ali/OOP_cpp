#include "../../header/Week-9/Acc_const.hpp"    // Forward slash for header path works on Linux and Windows in VS Code

// Default Constructor
Account::Account() {
    name = "";
}

// Constructor with one parameter
// Note explicit keyword is not required because compile looks at implementation to build object code
Account::Account(std::string accountName) : name{accountName} {
    // Empty body
}

// Access function to set
void Account::setName(std::string accountName) {
    name = accountName;
}

// Access function to get
std::string Account::getName() const {
    return name;
}