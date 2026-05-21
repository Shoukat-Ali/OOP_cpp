/**
 * This is an attempt to demonstrate that private data members of a class cannot be accessed directly from outside the class.
 * Instead, we can use public member functions to set and get the value of private data members.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -std=c++11 const_mem_func.cpp -o test
 */

#include <iostream>


class Sensor {
public:
    void setTemp(int t) { 
        temp = t; 
    }

    int getTemp() const { 
        return temp; 
    }
    
private:
    int temp{0};
};


int main() {
    Sensor s1;
    // s1.temp = 25;
    s1.setTemp(25);
    std::cout <<"Current temperature :: " << s1.getTemp() << std::endl; 
    return 0;
}