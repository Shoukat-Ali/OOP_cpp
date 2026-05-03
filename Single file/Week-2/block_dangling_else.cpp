// A simple program to demonstrate the dangling else problem
/**
 * This is an attempt to demonstrate the dangling else problem in C++. 
 * The issue arises when there are nested if statements without proper use of braces, 
 * leading to ambiguity in which else statement corresponds to which if statement. 
 * To compile and create executable of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 block_dangling_else.cpp -o test 
 */

#include <iostream>


//Dangling else problem occurs when there are nested if statements without proper use of braces.
// int main() 
// {
//     int x{10};
//     int y{5};

//     if (x > 5)
//         if (y > 15)
//             std::cout << "A\n";
//         else
//             std::cout << "B\n";

//     return 0;
// }

//====================================================
// Solution to the dangling else problem
//====================================================

int main() 
{
    int x{10};
    int y{5};

    if (x > 5) {
        if (y > 15) {
            std::cout << "A\n";
        }
    } else {
        std::cout << "B\n";
    }

    return 0;
}