/**
 * This program is an attempt to demonstrate tail call optimization in C++. 
 * Tail call optimization is a technique used by compilers to optimize recursive function calls 
 * that are in tail position, meaning the recursive call is the last operation performed in the function. 
 * This optimization can help prevent stack overflow errors and improve performance for certain types of recursive functions.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -Wall -std=c++11 tail_call_optimization.cpp -o test
 */

#include <iostream>


// Note: This code may not actually be optimized by the compiler, 
// as C++ does not guarantee tail call optimization. 
// However, this is an example of a tail-recursive function.
unsigned long long factorial(int n) {
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}


/* Tail call optimization version of factorial. 
The recursive call is the last operation performed in the function, allowing the compiler 
to optimize it and reuse the same stack frame for each call, thus preventing stack overflow
*/
unsigned long long factorialHelper(int n, unsigned long long result) {
    if (n == 0)
        return result;

    return factorialHelper(n - 1, n * result);
}

// Wrapper function for tail call optimized factorial
unsigned long long factorialTOC(int n) {
    return factorialHelper(n, 1);
}



int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    int n;

    while (true) {
        cout << "Enter a non-negative integer : ";
        cin >> n;
        if (n >= 0) {
            break;
        }
        cout << "Please enter a non-negative integer." << endl;
    }

    cout << "Factorial(" << n << ") = " << factorial(n) << endl;
    // cout << "Factorial (Tail Call Optimized)(" << n << ") = " << factorialTOC(n) << endl;

    return 0;
}