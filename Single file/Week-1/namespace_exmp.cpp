/**
 * This a simple program to demonstrate the use of namespaces in C++.
 * To compile and run this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 namespace_exmp.cpp -o test
 */

#include <iostream>


// Custom namespace named math_ops
namespace math_ops {
    int add(int a, int b) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }
}


int main() {
    // Use std::cout and std::endl from the standard namespace
    std::cout << "Using namespaces in C++\n";

    // Call functions inside the custom namespace
    int sum = math_ops::add(5, 3);
    int product = math_ops::multiply(5, 3);

    std::cout << "Sum:\r " << sum << std::endl;
    std::cout << "Product:\t " << product << std::endl;

    return 0;
}