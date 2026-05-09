/**
 * This is an attempt to demonstrate the use of the C++11 <random> library for generating random numbers.
 * The <random> library provides a modern and flexible way to generate random numbers in C++.
 * It includes various random number engines and distributions that can be used to generate random numbers of different types and distributions.
 * To compile and create executable of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 better_random.cpp -o test
 */
#include <iostream>
#include <iomanip>
#include <random>   // for std::default_random_engine and std::uniform_int_distribution
#include <ctime>

int main() 
{
    using std::cout; 
    using std::endl;

    // use the default random-number generation engine to
    // produce uniformly distributed pseudorandom int values from 1 to 6
    std::default_random_engine engine{static_cast<unsigned int>(time(nullptr))};
    std::uniform_int_distribution<unsigned int> randomInt{1, 6};

    cout << "Rolling a six-sided die 24 times using C++11 <random> library:" << endl;
    for (unsigned int i{1}; i <= 24; ++i) {
        // pick random number from 1 to 6 and output it
        cout << std::setw(10) << randomInt(engine);
        // if counter is divisible by 6, start a new line of output
        if (i % 6 == 0) {
            cout << endl;
        }
    }

    return 0;
}