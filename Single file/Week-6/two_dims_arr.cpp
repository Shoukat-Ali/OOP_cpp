/**
 * This program demonstrates the use of two-dimensional arrays in C++ using the std::array container. 
 * It initializes two 2D arrays, prints their values, and computes the sum of all elements in one of the arrays 
 * using both traditional for loops and range-based for loops.
 * This code snippet is from the course textbook.
 * 
 * To compile and create an executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 two_dims_arr.cpp -o test
 */

#include <iostream>
#include <array>

const size_t rows{2};
const size_t columns{3};
using std::array;

void printArray(const array<array<int, columns>, rows>&);


int main() {
    std::array<std::array<int, columns>, rows> array1{1, 2, 3, 4, 5, 6};
    std::array<std::array<int, columns>, rows> array2{1, 2, 3, 4, 5};
    std::cout << "Values in array1 by row are:" << std::endl;
    printArray(array1);
    std::cout << "\nValues in array2 by row are:" << std::endl;
    printArray(array2);

    // Array operations to compute the sum of all elements of array1
    unsigned int total = 0;
    for (size_t row{0}; row < array1.size(); ++row) {
        for (size_t column{0}; column < array1[row].size(); ++column) {
            total += array1[row][column];
        }
    }
    std::cout << "Sum of all elements of array1: " << total << std::endl;

    // Using range-based for loops to compute the sum of all elements of array1
    total = 0;
    for (auto const& row : array1) {
        for (auto const& element : row) {
            total += element;
        }
    }
    std::cout << "Sum of all elements of array1: " << total << std::endl;
}



// output array with two rows and three columns
void printArray(const array<array<int, columns>, rows>& a) {
    // loop through array's rows
    for (auto const& row : a) {
        // loop through columns of current row
        for (auto const& element : row) {
            std::cout << element << ' ';
        }
        std::cout << std::endl; // start new line of output
    }

    // Alternative way to output array with two rows and three columns
    // for (size_t row{0}; row < a.size(); ++row) {
    //     for (size_t column{0}; column < a[row].size(); ++column) {
    //         std::cout << a[row][column] << ' ';
    //     }
    //     std::cout << std::endl;
    // }
}