/**
 * This is a simple program to demonstrate the use of the C++ standard library functions for generating random numbers.
 * The program simulates rolling a six-sided die 24 times using the rand() function and then simulates rolling a six-sided die 24 times 
 * again using the srand() function to seed the random number generator with the current time.
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 rolling_dice.cpp -o test
 */

#include <iostream>
#include <iomanip> // for std::setw
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

int main() 
{
    using std::cout; 
    using std::endl;
    using std::setw;
    
    unsigned int counter{1};

    cout << "The maximum value returned by rand() is " << RAND_MAX << endl;

    // loop 24 times
    cout << "Rolling a six-sided die 24 times using rand():" << endl;
    for (; counter <= 24; ++counter) {
        // pick random number from 1 to 6 and output it
        cout << setw(10) << (1 + (rand() % 6));
        // For display purposes, we will print 6 numbers per line.
        // if counter is divisible by 6, start a new line of output
        if (counter % 6 == 0) {
            cout << endl;
        }
    }

    // Simulate rolling a six-sided die using std::srand()
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(std::time(nullptr)));        // Always safe
    // srand(std::time(nullptr));      // Could be risky

    cout << "Rolling a six-sided die 24 times using srand() for seeding:" << endl;
    for (counter = 1; counter <= 24; ++counter) {
        // pick random number from 1 to 6 and output it
        cout << setw(10) << (1 + (rand() % 6));
        // For display purposes, we will print 6 numbers per line.
        // if counter is divisible by 6, start a new line of output
        if (counter % 6 == 0) {
            cout << endl;
        }
    }

    return 0;
}