/**
 * This program demonstrates how to create a bar chart using a std::array in C++. 
 * The program initializes an array with the number of grades in each grade range and then 
 * outputs a bar chart to the console. Each bar in the chart is represented by a series of asterisks (*), 
 * where the number of asterisks corresponds to the number of grades in that range.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 bar_chart_grades.cpp -o test
 */
#include <iostream>
#include <iomanip>
#include <array>

int main() {
    const size_t arraySize{11};
    std::array<unsigned int, arraySize> n{0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1};
    
    std::cout << "Grade distribution:" << std::endl;
    // for each element of array n, output a bar of the chart
    for (size_t i{0}; i < n.size(); ++i) {
        // output bar labels ("0-9:", ..., "90-99:", "100:")
        if (0 == i) {
            std::cout << " 0-9: ";
        }
        else if (10 == i) {
            std::cout << " 100: ";
        }
        else {
            std::cout << i * 10 << "-" << (i * 10) + 9 << ": ";
        }
        // print bar of asterisks
        for (unsigned int stars{0}; stars < n[i]; ++stars) {
            std::cout << '*';
        }
        std::cout << std::endl; // start a new line of output
    }
}
