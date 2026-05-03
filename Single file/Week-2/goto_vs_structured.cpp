/**
 * This is an attempt to demonstrate the use of goto statements in C++ and its consequences. 
 * The goto statement allows for an unconditional jump to a labeled statement within the same function. 
 * However, the use of goto is generally discouraged in modern programming due to its potential to create 
 * spaghetti code, which can be difficult to read and maintain. 
 * Instead, structured programming constructs such as loops and functions are typically 
 * preferred for better readability and maintainability. 
 * To compile and create executable of this program, please run the following GNU C++ command in the terminal:
 *      
 *      g++ -std=c++11 goto_vs_structured.cpp -o test
 */

#include <iostream>


// int main() 
// {
//     int i = 0;


//     start:      // label to mark specific location in the code
//         if (i > 5)
//             goto end;   // jump to end label
            
//         std::cout << i << "\n";
//         i = i + 1;
        
//         if (i == 3) {
//             i = i + 1;
//             goto skip;  // jump to skip label
//         }
            
//         goto start;     // jump to start label
        
//     skip:       // label to mark specific location in the code
//         std::cout << "Skipping something...\n";
//         goto start;     // jump to start label
        
//     end:        // label to mark specific location in the code
//         std::cout << "Done\n";
    
//     return 0;
// }

//================================================================================
// Bohm and Jacopini idea: Structured programming
// ================================================================================


int main() 
{
    int i = 0;

    while (i <= 5) {
        std::cout << i << "\n";
        i = i + 1;

        if (i == 3) {
            i = i + 1;
            std::cout << "Skipping something...\n";
        }
    }

    std::cout << "Done\n";
    return 0;
}