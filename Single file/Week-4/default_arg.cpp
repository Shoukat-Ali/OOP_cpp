/**
 * This is a simple program to demonstrate the use of default arguments in C++ functions.
 * Default arguments allow a function to be called with fewer arguments than it is defined to accept,
 * by providing default values for the missing arguments.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -std=c++11 default_arg.cpp -o test
 */


#include <iostream>

// function prototype that specifies default arguments
unsigned int boxVolume(unsigned int length = 1, 
                       unsigned int width = 1, 
                       unsigned int height = 1);

// function prototype that specifies normal and default arguments
unsigned int mybox(unsigned int length,
                   unsigned int width = 1, 
                   unsigned int height = 1);


int main() {
    using std::cout;
    using std::endl;
    
    // no arguments--use default values for all dimensions
    cout << "The default box volume is: " << boxVolume() << endl;
    // specify length; default width and height
    cout << "\nThe volume of a box with length 10,\n"
              << "width 1 and height 1 is: " << boxVolume(10) << endl;
    // specify length and width; default height
    cout << "\nThe volume of a box with length 10,\n"
              << "width 5 and height 1 is: " << boxVolume(10, 5) << endl;
    // specify all arguments
    cout << "\nThe volume of a box with length 10,\n"
              << "width 5 and height 2 is: " << boxVolume(10, 5, 2) << endl;
    
    // mix of normal and default arguments
    // cout << "The default mybox volume is: " << mybox() << endl;     // Error: no argument for length
    
    // specify length; default width and height
    cout << "\nThe volume of mybox with length 10,\n"
              << "width 1 and height 1 is: " << mybox(10) << endl;
    // specify length and width; default height
    cout << "\nThe volume of mybox with length 10,\n"
              << "width 5 and height 1 is: " << mybox(10, 5) << endl;
    // specify all arguments
    cout << "\nThe volume of mybox with length 10,\n"
              << "width 5 and height 2 is: " << mybox(10, 5, 2) << endl;


    return 0;
}


// function boxVolume calculates the volume of a box
unsigned int boxVolume(unsigned int length, unsigned int width, unsigned int height) {
    return length * width * height;
}

// function mybox calculates the volume of mybox
unsigned int mybox(unsigned int length, unsigned int width, unsigned int height) {
    return length * width * height;
}