/**
 * This is an attempt to demonstrate the use of the climits and limits headers in C++.
 * The climits header defines the limits of fundamental integral types for the specific platform.
 * To compile and create executable of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 value_range.cpp -o test 
 */

#include <iostream>
// climits header defines the limits of fundamental integral types for the specific platform.
// Works the same as in C. Uses preprocessor macros and no type safety
#include <climits>

//
#include <limits>

int main() 
{
    using std::cout;
    cout << "Using the old climits\n";
    cout << "\tThe range of char is from " << CHAR_MIN << " to " << CHAR_MAX << '\n';
    cout << "\tThe range of short is from " << SHRT_MIN << " to " << SHRT_MAX << '\n';
    cout << "\tThe range of int is from " << INT_MIN << " to " << INT_MAX << '\n';
    cout << "\tThe range of long is from " << LONG_MIN << " to " << LONG_MAX << '\n';
    cout << "\tThe range of long long is from " << LLONG_MIN << " to " << LLONG_MAX << '\n';

    cout << "Using the C++ limits header\n";
    cout << "\tThe range of char is from " << +std::numeric_limits<char>::min() 
                << " to " << +std::numeric_limits<char>::max() << '\n';
    cout << "\tThe range of short is from " << std::numeric_limits<short>::min() 
                << " to " << std::numeric_limits<short>::max() << '\n';
    cout << "\tThe range of int is from " << std::numeric_limits<int>::min() 
                << " to " << std::numeric_limits<int>::max() << '\n';
    cout << "\tThe range of long is from " << std::numeric_limits<long>::min() 
                << " to " << std::numeric_limits<long>::max() << '\n';
    cout << "\tThe range of long long is from " << std::numeric_limits<long long>::min() 
                << " to " << std::numeric_limits<long long>::max() << '\n';
    cout << "\tThe range of float is from " << std::numeric_limits<float>::min() 
                << " to " << std::numeric_limits<float>::max() << '\n';
    cout << "\tThe range of double is from " << std::numeric_limits<double>::min() 
                << " to " << std::numeric_limits<double>::max() << '\n';
    cout << "\tThe range of long double is from " << std::numeric_limits<long double>::min() 
                << " to " << std::numeric_limits<long double>::max() << '\n';

    return 0;
}

