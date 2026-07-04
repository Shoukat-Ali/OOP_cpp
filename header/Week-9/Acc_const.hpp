#include <string>

#ifndef ACC_CONST_HPP
#define ACC_CONST_HPP

class Account {
public:
    // Prototypes
    Account();
    explicit Account(std::string accountName);
    void setName(std::string accountName);
    std::string getName() const;
      
private:
    std::string name; // data member containing account holder's name

}; // end class Account

#endif