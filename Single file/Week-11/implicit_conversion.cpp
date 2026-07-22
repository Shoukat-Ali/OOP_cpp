/**
 * This is an attempt to demonstrate implicit conversion in C++ using class consturctor.
 * 
 * To compile and create and executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 implicit_conversion.cpp -o test
 * 
 */

#include <iostream>
#include <string>

class User {
public:
    // Conversion Constructor (takes a single argument)
    // Note that the explicit keyword is not used here, allowing implicit conversion from std::string to User.
    // User(std::string userName) : name(userName) { }
    // Preventing implicit conversion
    explicit User(std::string userName) : name(userName) { }

    void printName() const {
        std::cout << "User Name: " << name << std::endl;
    }

private:
    std::string name;
};

// Function that takes a User object as a parameter
void displayUser(User u) {
    u.printName();
}


int main() {
    // creating an object
    User user1("Alice");
    
    // Implicit conversion
    // std::string nameStr = "Bob";
    // displayUser(nameStr); // Automatically converts nameStr to a User object
    // Explicit single-argument constructor call
    displayUser(User{"Bob"}); 
    return 0;
}