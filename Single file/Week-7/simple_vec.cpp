/**
 * This is a simple program to demonstrate std::vector in C++11.
 * To compile and create an executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 simple_vec.cpp -o test
 * 
 */
#include <iostream>
#include <vector>

int main()
{
    using std::cout;
    using std::endl;

    std::vector<int> vec1;
    std::vector<int> vec2{11, 12, 13, 14, 15, 16};
    
    /**
     * size_type size() const;
     * The size() returns the number of elements in the container, i.e. std::distance(begin(), end()) 
     */
    cout << "vec1.size(): "<< vec1.size() << "-element\n"
         << "vec2.size(): "<< vec2.size() << "-element\n"
         << "-------------------------------------\n" ;
    /**
     * size_type capacity() const;
     * The capacity() returns the number of elements that the vector can hold without requiring reallocation
     */
    cout << "vec1.capacity(): "<< vec1.capacity() << "-element space\n"
         << "vec2.capacity(): "<< vec2.capacity() << "-element space\n"
         << "-------------------------------------\n" ;

    /**
     * void push_back( T&& value );
     * The push_back() appends the given element value to the end of the container. The value is moved into the new element.
     */
    vec1.push_back(1);
    vec2.push_back(17);

    cout << "vec1.size(): "<< vec1.size() << "-element\n"
         << "vec2.size(): "<< vec2.size() << "-element\n"
         << "-------------------------------------\n" ;

    cout << "vec1.capacity(): "<< vec1.capacity() << "-element space\n"
         << "vec2.capacity(): "<< vec2.capacity() << "-element space\n"
         << "-------------------------------------\n" ;

    vec1.push_back(2);
    vec2.push_back(18);

    cout << "vec1.size(): "<< vec1.size() << "-element\n"
         << "vec2.size(): "<< vec2.size() << "-element\n"
         << "-------------------------------------\n" ;

    cout << "vec1.capacity(): "<< vec1.capacity() << "-element space\n"
         << "vec2.capacity(): "<< vec2.capacity() << "-element space\n"
         << "-------------------------------------\n" ;

    // Display the content of the vectors using range-based for loop
    cout << "Elements of vec1 :: ";
    for(auto element: vec1) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Elements of vec2 :: ";
    for(auto element: vec2) {
        cout << element << " ";
    }
    cout << endl;


    return 0;
}