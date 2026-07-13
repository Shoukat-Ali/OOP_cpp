/**
 * The following example is taken from the textbook to demonstrate the idea of friend function.
 * 
 * Note: Since we are using VS Code IDE, therefore, the use of forward slash (/) for header file path works on Linux and Windows. 
 * Please sure that when you run the above GNU C++ command,  the terminal is set to PowerShell on Windows.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 simple_friend_func.cpp -o test
 * 
 */

#include <iostream>

// Count class definition
class Count {
    friend void setX(Count&, int); // friend declaration    
public:
    int getX() const {return x;}
private:
    int x{0};
};

// function setX can modify private data of Count
// because setX is declared as a friend of Count (line 8)
void setX(Count& c, int val) {
    c.x = val; // allowed because setX is a friend of Count
}


int main() {
    Count counter; // create Count object
    std::cout << "counter.x after instantiation: " << counter.getX() << std::endl;
    
    setX(counter, 8); // set x using a friend function
    std::cout << "counter.x after call to setX friend function: "
              << counter.getX() << std::endl;
}