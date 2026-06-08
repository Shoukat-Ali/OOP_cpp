/**
 * This program simulates rolling a six-sided die 60,000,000 times and counts the frequency of each face.
 * The code snippet is from the course textbook.
 * To compile and create an executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 Die_rolling_freq.cpp -o test
 */
#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>

int main() {
    // use the default random-number generation engine to
    // produce uniformly distributed pseudorandom int values from 1 to 6
    std::default_random_engine engine(static_cast<unsigned int>(time(0)));
    std::uniform_int_distribution<unsigned int> randomInt(1, 6);
    
    const size_t arraySize{7}; // ignore element zero
    std::array<unsigned int, arraySize> frequency{}; // initialize to 0s
    // roll die 60,000,000 times; use die value as frequency index
    for (unsigned int roll{1}; roll <= 60000000; ++roll) {
        ++frequency[randomInt(engine)];
    }
    
    std::cout << "Face" << std::setw(13) << "Frequency" << std::endl;
    // output each array element's value
    for (size_t face{1}; face < frequency.size(); ++face) {
        std::cout << std::setw(4) << face << std::setw(13) << frequency[face] << std::endl;
    }
}