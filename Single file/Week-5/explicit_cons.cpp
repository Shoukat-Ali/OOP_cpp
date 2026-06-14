/**
 * This is an attempt to demonstrate the use of keyword explicit with constructor with on parameter to avoid
 * implicit conversion.
 * 
 * To compile and create and executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 explicit_cons.cpp -o test
 * 
 */
#include <iostream>

using std::cout;
using std::endl;


class Distance {
public:
    Distance(int paraDist) {
    // explicit Distance(int paraDist) {
        if (paraDist > 0) {
            initialDist = paraDist;
        }
        cout << "Initial distance is set to : " << initialDist << endl;

    }
private:
    int initialDist{0};

};

void printDist(Distance dist) {
    cout << "Implicit conversion Perfmored\n";
}


int main() {
    Distance d1{-3};    // Object creation
    Distance d2(7);     // Object creation
    printDist(23);      // Function calling
    return 0;
}
