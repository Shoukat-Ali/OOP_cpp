/**
 * This is an attempt to calculate the Fibonacci numbers using both recursive and iterative approaches.
 * The Fibonacci sequence is defined as follows:
 * F(0) = 0
 * F(1) = 1
 * F(n) = F(n-1) + F(n-2) for n > 1
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -std=c++11 fibonacci.cpp -o test
 */

#include <iostream>

unsigned long long fiboRec(unsigned int); // function prototype
unsigned long long fiboIter(unsigned int); // function prototype

int main() {
    using std::cout;
    using std::endl;

    // calculate the fibonacci values of 0 through 10
    for (unsigned int counter{0}; counter <= 10; ++counter) {
        cout << "fibonacci(" << counter << ") = "
                  << fiboRec(counter) << endl;
    }
    cout << "===================================================" << endl;
    // display higher fibonacci values
    cout << "fibonacci(20) = " << fiboRec(20) << endl;
    cout << "fibonacci(30) = " << fiboRec(30) << endl;
    cout << "fibonacci(40) = " << fiboRec(40) << endl;

    cout << "=============== Iterative ==========================" << endl;
    // display higher fibonacci values
    cout << "fibonacci(20) = " << fiboIter(20) << endl;
    cout << "fibonacci(30) = " << fiboIter(30) << endl;
    cout << "fibonacci(40) = " << fiboIter(40) << endl;
    
    return 0;
}


// recursive function fibonacci
unsigned long long fiboRec(unsigned int number) {
    if ((0 == number) || (1 == number)) { // base cases
        return number;
    }
    else { // recursion step
        return fiboRec(number - 1) + fiboRec(number - 2);
    }
}


// Iterative function fibonacci
unsigned long long fiboIter(unsigned int number) {
    unsigned long long fiboValue{0}; // initialize fibonacci value
    unsigned long long nextFiboValue{1}; // initialize next fibonacci value
    unsigned long long tempValue{0}; // temporary variable for swapping
    
    if (number == 0) {
        return fiboValue;
    }
    else if (number == 1) {
        return nextFiboValue;
    }
    else {
        for (unsigned int counter{2}; counter <= number; ++counter) {
            tempValue = nextFiboValue; // save nextFiboValue
            nextFiboValue += fiboValue; // calculate next fibonacci value
            fiboValue = tempValue; // update fiboValue
        }
        return nextFiboValue;
    }
}