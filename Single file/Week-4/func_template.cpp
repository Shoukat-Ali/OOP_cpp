/**
 * This program is an attempt to demonstrate function templates in C++.
 * A function template is a blueprint for creating functions that can operate with any data type.
 * The template allows you to write a single function definition that can be used for different data types.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -std=c++11 func_template.cpp -o test
 */
#include <iostream>


template <typename T> // or template<class T>
T maximum(T value1, T value2, T value3) {
    T maximumValue{value1}; // assume value1 is maximum
    // determine whether value2 is greater than maximumValue
    if (value2 > maximumValue) {
        maximumValue = value2;
    }
    
    // determine whether value3 is greater than maximumValue
    if (value3 > maximumValue) {
        maximumValue = value3;
    }
    return maximumValue;
}

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    // demonstrate maximum with int values
    cout << "Input three integer values\n";
    int int1, int2, int3;
    
    cout << "\tEnter 1st integer : ";
    cin >> int1;
    cout << "\tEnter 2nd integer : ";
    cin >> int2;
    cout << "\tEnter 3rd integer : ";
    cin >> int3;

    // invoke int version of maximum
    cout << "The maximum integer value is: " << maximum(int1, int2, int3) << endl;
    
    // demonstrate maximum with double values
    cout << "\nInput three double values\n ";
    double double1, double2, double3;
    
    cout << "\tEnter 1st double : ";
    cin >> double1;
    cout << "\tEnter 2nd double : ";
    cin >> double2;
    cout << "\tEnter 3rd double : ";
    cin >> double3;

    // invoke double version of maximum
    cout << "The maximum double value is: " << maximum(double1, double2, double3) << endl;
    
    // demonstrate maximum with char values
    cout << "\nInput three characters\n";
    char char1, char2, char3;
    
    cout << "\tEnter 1st character : ";
    cin >> char1;
    cout << "\tEnter 2nd character : ";
    cin >> char2;
    cout << "\tEnter 3rd character : ";
    cin >> char3;

    // invoke char version of maximum
    cout << "The maximum character value is: " << maximum(char1, char2, char3) << endl;
    return 0;
}