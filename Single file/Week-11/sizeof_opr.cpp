/**
 * This is an attempt to demonstrate the use of sizeof operator in C++.
 * In this example, we use fundamental data types, (built-in) array, and user-defined data types (class) 
 * to demonstrate the use of sizeof operator in C++.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 *          
 *          g++ -Wall -Werror -std=c++11 sizeof_opr.cpp -o test
 * 
 */

#include <iostream>

class MyClass {
public:
    MyClass() { 
        std::cout << "MyClass constructor called." << std::endl;
    }
    ~MyClass() { 
        std::cout << "MyClass destructor called." << std::endl;
        v3 = '\0';
        v2 = 0;
        v1 = 0.0;
    }
private:
    /**The size of the class object is determined by the size of its largest data member(s) 
     * and the alignment (padding) requirements of the data members. 
     * Please change the order and type of data to see the effect on the size of the class object.*/ 
    int v2{0};
    char v3{'\0'};
    double v1{0.0};

};

int main() {
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;

    int arr[10];
    std::cout << "Size of array of 10 ints: " << sizeof(arr) << " bytes" << std::endl;
    int* ptr = arr;
    std::cout << "Size of pointer to int: " << sizeof(ptr) << " bytes" << std::endl;

    MyClass obj;
    std::cout << "Size of MyClass object: " << sizeof(obj) << " bytes" << std::endl;

    return 0;
}