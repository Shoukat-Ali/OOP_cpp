/**
 * This is a simpole program to demonstrate the use of at() function to access elements of an array 
 * and how it can throw an exception when trying to access out-of-bounds index.
 * 
 * To compile and create an executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 excp_arr_access.cpp -o test
 */


#include <iostream>
#include <array>

int main() {
    const size_t arraySize{5}; // size of the array
    std::array<int, arraySize> arr{10, 20, 30, 40, 50};

    for(size_t i{0}; i < arr.size(); i++) {
        std::cout << arr.at(i) << " ";
    }
    std::cout << std::endl;
    
    // Unsafe way to access out-of-bounds index
    std::cout << "Accessing out-of-bounds index: " << arr[10] << std::endl; // This will lead to undefined behavior

    // Attempting to access out-of-bounds index using at() function
    try {
        std::cout << "Accessing out-of-bounds index: " << arr.at(10) << std::endl; // This will throw an exception
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}   
