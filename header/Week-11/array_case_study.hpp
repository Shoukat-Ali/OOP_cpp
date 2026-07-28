/**
 * This case study (program) is taken from the textbook to demonstrate operator overloading. 
 */

#ifndef ARRAY_CASE_STUDY_HPP
#define ARRAY_CASE_STUDY_HPP

#include <iostream>

class MyArray {
    friend std::ostream& operator<<(std::ostream&, const MyArray&);
    friend std::istream& operator>>(std::istream&, MyArray&);
public:
    explicit MyArray(int = 10); // default constructor
    MyArray(const MyArray&); // copy constructor
    ~MyArray(); // destructor
    size_t getSize() const; // return size
    const MyArray& operator=(const MyArray&); // assignment operator
    bool operator==(const MyArray&) const; // equality operator
    // inequality operator; returns opposite of == operator
    bool operator!=(const MyArray& right) const;
    // subscript operator for non-const objects returns modifiable lvalue
    int& operator[](int);
    // subscript operator for const objects returns rvalue
    int operator[](int) const;
private:
    size_t size; // pointer-based array size
    int* ptr; // pointer to first element of pointer-based array
};

#endif