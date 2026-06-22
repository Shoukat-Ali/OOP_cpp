/**
 * This is a simple C++ program that demonstrates the use of std::vector, a sequence container that encapsulates dynamic size arrays.
 * 
 * std::vector is a sequence container that encapsulates dynamic size arrays.
 * The elements are stored contiguously, which means that elements can be accessed 
 * not only through iterators, but also using offsets to regular pointers to elements. 
 * This means that a pointer to an element of a vector may be passed to any function that 
 * expects a pointer to an element of an array. 
 * 
 * The storage of the vector is handled automatically, being expanded as needed. 
 * Vectors usually occupy more space than static arrays, because more memory is allocated 
 * to handle future growth. This way a vector does not need to reallocate each time an element 
 * is inserted, but only when the additional memory is exhausted. The total amount of allocated memory 
 * can be queried using capacity() function. Extra memory can be returned to the system 
 * via a call to shrink_to_fit()[1]. 
 * 
 * Reallocations are usually costly operations in terms of performance. 
 * The reserve() function can be used to eliminate reallocations if the number of elements is known beforehand.
 * 
 * To compile and create an executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 explore_vec.cpp -o test
 *  
*/

#include <iostream>
#include <vector>

int main()
{
    using std::cout;
    std::vector<int> Vec1;
    std::vector<int> Vec2{1, 2, 3, 4};
    
    cout << "Vec1.capacity(): "<< Vec1.capacity() << "-element\n"
         << "Vec2.capacity(): "<< Vec2.capacity() << "-element\n";

    Vec1.reserve(5);
    Vec2.push_back(5);

    cout << "Vec1.capacity(): "<< Vec1.capacity() << "-element\n"
         << "Vec2.capacity(): "<< Vec2.capacity() << "-element\n";

    Vec1.push_back(11);
    Vec2.push_back(6);

    cout << "Vec1.capacity(): "<< Vec1.capacity() << "-element\n"
         << "Vec2.capacity(): "<< Vec2.capacity() << "-element\n";

     // C++11 initializer list syntax:
    std::vector<std::string> words1{"the", "frogurt", "is", "also", "cursed"};
    std::cout << "1: "; 
    for (const auto& elem: words1)
          std::cout << elem << ", ";
 
    // words2 == words1
    std::vector<std::string> words2(words1.begin(), words1.end());
    std::cout << "\n2: ";
    for (const auto& elem: words2) 
          cout << elem << ", ";
 
    // words3 == words1
    std::vector<std::string> words3(words1);
    std::cout << "\n3: "; 
    for (auto it = words3.begin(); it != words3.end(); it = std::next(it))
          cout << *it  << ", ";
 
    // words4 is {"Mo", "Mo", "Mo", "Mo", "Mo"}
    std::vector<std::string> words4(5, "Mo");
    std::cout << "\n4: ";
    for (const auto& elem: words4) 
          cout << elem  << ", ";
     cout << "\n";

    return 0;
}