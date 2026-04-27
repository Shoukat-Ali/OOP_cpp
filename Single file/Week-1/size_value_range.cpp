/**
 * This a simple program to demonstrate the use of sizeof operator in C++.
 * To compile and run this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 size_value_range.cpp -o test
 */

#include <iostream>

int main()
{
    // Singed integer types with negative values
    signed char c{-11}; 
    short int s{-1234};
    int a{-123456};
    long int l{-12345678};
    long long int ll{-1234567890};


    // // Unsigned integer types with positive values
    unsigned char uc{25};
    unsigned short int us{1234};
    unsigned int ua{123456};
    unsigned long int ul{12345678};
    unsigned long long int ull{1234567890};

    // // Output the size in bytes of the defined variables
    std::cout << "Size of signed char: " << sizeof(c) << "-byte" << std::endl;
    std::cout << "Size of short int: " << sizeof(s) << "-byte" << std::endl;
    std::cout << "Size of int: " << sizeof(a) << "-byte" << std::endl;
    std::cout << "Size of long int: " << sizeof(l) << "-byte" << std::endl;
    std::cout << "Size of long long int: " << sizeof(ll) << "-byte" << std::endl;
    std::cout << "Size of unsigned char: " << sizeof(uc) << "-byte" << std::endl;
    std::cout << "Size of unsigned short int: " << sizeof(us) << "-byte" << std::endl;
    std::cout << "Size of unsigned int: " << sizeof(ua) << "-byte" << std::endl;
    std::cout << "Size of unsigned long int: " << sizeof(ul) << "-byte" << std::endl;
    std::cout << "Size of unsigned long long int: " << sizeof(ull) << "-byte" << std::endl;

    // float-point types
    float f{3.14f};
    double d{3.14};
    long double ld{3.14L};

    std::cout << "Size of float: " << sizeof(f) << "-byte" << std::endl;
    std::cout << "Size of double: " << sizeof(d) << "-byte" << std::endl;
    std::cout << "Size of long double: " << sizeof(ld) << "-byte" << std::endl;

    // bigger char types
    char c1{97};
    char16_t c16{97};
    char32_t c32{97};
    wchar_t wc{97};
    std::cout << "Size of char16_t: " << sizeof(c16) << "-byte" << std::endl;
    std::cout << "Size of char32_t: " << sizeof(c32) << "-byte" << std::endl;
    std::cout << "Size of wchar_t: " << sizeof(wc) << "-byte" << std::endl;

    std::cout << "Value of char: " << c1 << std::endl;
    std::cout << "Value of char16_t: " << c16 << std::endl;
    std::cout << "Value of char32_t: " << c32 << std::endl;
    std::cout << "Value of wchar_t: " << wc << std::endl;

    return 0;
}