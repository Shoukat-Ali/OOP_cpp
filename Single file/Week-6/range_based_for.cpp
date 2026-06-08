/**
 * This program demonstrates the use of range-based for loops in C++11 to modify elements of an array.
 * The code snippet is from the course textbook.
 * 
 * To compile and create an executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 range_based_for.cpp -o test
 */

#include <iostream>
#include <array>

int main() {
    const size_t arraySize{5};
    std::array<int, arraySize> items{1, 2, 3, 4, 5};
    
    // display items before modification
    std::cout << "items before modification: ";
    for (int item : items) {
        std::cout << item << " ";
    }

    // multiply the elements of items by 2
    for (int& itemRef : items) {
        itemRef *= 2;
    }

    // What if?
    // for (int item : items) {
    //     item *= 2;   // This modifies the copy of the item
    // }

    // display items after modification
    std::cout << "\nitems after modification: ";
    for (int item : items) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
    return 0;
}