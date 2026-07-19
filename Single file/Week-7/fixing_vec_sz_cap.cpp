/**
 * This is an attempt to demonstrate the fixing the size and / or capacity of vector at runtime.
 * 
 * To compile and create and executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 fixing_vec_sz_cap.cpp -o test
 */
#include <iostream>
#include <vector>

int main() {
    using std::cout;
    using std::endl;
    using std::vector;

    vector<int> vec1(5);    // initializes elements to zero
    vector<int> vec2;
    vec2.reserve(3);        // Does not initialize elements
    
    // vector<int> vec3.reserve(7); 

    cout << "For vec1, we have" << endl 
         << "\tNo. of elements: " << vec1.size() << endl 
         << "\tCapacity: " << vec1.capacity() << endl;
    cout << "For vec2, we have" << endl
         << "\tNo. of elements: " << vec2.size() << endl
         << "\tCapacity of vec2: " << vec2.capacity() << endl;
    
    cout << "content of vec1" << endl;
    // Range-based for loop
    // for(auto const& elem: vec1){
    //     cout << elem << " ";
    // }
    // Counter-controlled for loop
    for (size_t i{0}; i < vec1.size(); ++i) {
        cout << vec1[i] << " ";
    }
    cout << endl;

    cout << "content of vec2" << endl;
    // Range-based for loop
    // for(auto const& elem: vec2){
    //     cout << elem << " ";
    // }
    // Counter-controlled for loop
    for (size_t i{0}; i < vec2.size(); ++i) {
        cout << vec2[i] << " ";
    }

    // vec2.at(0) = 7;      // Error out of range
    vec2.push_back(7);
    vec2.push_back(8);
    for (size_t i{0}; i < vec2.size(); ++i) {
        cout << vec2[i] << " ";
    }
    cout << endl;
    // cout << "vec2.size(): " << vec2.size() << endl;


    return 0;
}