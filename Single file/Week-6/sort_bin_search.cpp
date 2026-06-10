/**
 * This program demonstrates the use of the sort and binary_search algorithms from the C++ Standard Library.
 * The code snippet is from the course textbook.
 * 
 * To compile and create an executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 sort_bin_search.cpp -o test
 */
#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm> // contains sort and binary_search

int main() {
    const size_t arraySize{7}; // size of array colors
    std::array<std::string, arraySize> colors{"red", "orange", "yellow", "green", "blue", "indigo", "violet"};
    // output original array
    std::cout << "Unsorted array:\n";
    for (const std::string& color : colors) {
        std::cout << color << " ";
    }
    // sort array colors in alphabetical order
    std::sort(colors.begin(), colors.end()); // sort contents of colors
    // output sorted array
    std::cout << "\nSorted array:\n";
    for (const std::string& item : colors) {
        std::cout << item << " ";
    }
    // Binary search for "indigo" in colors
    bool found{std::binary_search(colors.begin(), colors.end(), "indigo")};
    std::cout << "\n\n\"indigo\" " << (found ? "was" : "was not")
              << " found in colors" << std::endl;
    
              // Binary search for "cyan" in colors
    found = std::binary_search(colors.begin(), colors.end(), "cyan");
    std::cout << "\"cyan\" " << (found ? "was" : "was not")
              << " found in colors" << std::endl;
    
    return 0;
}