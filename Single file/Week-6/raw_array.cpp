/**
 * This program is an attempt to demonstrate the use of raw arrays in C++ and what could go wrong when using them. 
 * To demonstrate some of the issues,
 *      Fixed size determined at declaration.
 *      Does not know its own size.
 *      No built-in member functions.
 *      Array name decays to a pointer when passed to a function, therefore, no sizeof operator 
 *      No bounds checking.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 raw_array.cpp -o test
 */

#include <iostream>

void print(int arr[], int size);
// void printArray(int (&arr)[5]);

using std::cout; using std::endl;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Attempting to access out-of-bounds index
    cout << "Accessing out-of-bounds index: " << arr[15] << endl; // This will lead to undefined behavior
    // Finding the size of the array using sizeof operator
    cout << "Number of the array elements: " << sizeof(arr) / sizeof(arr[0]) << endl; // This will correctly print the size of the array

    print(arr, 5); // Call the print function to display the array elements
    // printArray(arr); // Call the printArray function to display the array elements
    return 0;
}


/**
 * Function to print the elements of the array
 * Since the array name decays to a pointer to first array element when passed to a function, 
 * therefore, no sizeof operator can be used
 *  */ 
void print(int arr[], int size) {
    // for(int i = 0; i < size; i++) {
    for(int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


// One could be
// This only accepts arrays of exactly 5 integers
void printArray(int (&arr)[5]) {
    int length = sizeof(arr) / sizeof(arr[0]); // Works! (Equals 5)
    for(int i = 0; i < length; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}