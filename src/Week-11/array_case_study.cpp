#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "../../header/Week-11/array_case_study.hpp"


// default constructor for class MyArray (default size 10)
MyArray::MyArray(int MyArraySize) 
        : size{(MyArraySize > 0 ? static_cast<size_t>(MyArraySize) : 
            throw std::invalid_argument{"MyArray size must be greater than 0"})},
        ptr{new int[size]{}} { 
            /* empty body */ 
}

// copy constructor for class MyArray;
// must receive a reference to an MyArray
MyArray::MyArray(const MyArray& MyArrayToCopy) : size{MyArrayToCopy.size}, ptr{new int[size]} {
    for (size_t i{0}; i < size; ++i) {
        ptr[i] = MyArrayToCopy.ptr[i]; // copy into object
    }
}

// destructor for class MyArray
MyArray::~MyArray() {
    delete[] ptr; // release pointer-based array space
}

// return number of elements of MyArray
size_t MyArray::getSize() const {
    return size; // number of elements in MyArray
}

// overloaded assignment operator;
// const return avoids: (a1 = a2) = a3
const MyArray& MyArray::operator=(const MyArray& right) {
    if (&right != this) { 
        // avoid self-assignment
        // for MyArrays of different sizes, deallocate original
        // left-side MyArray, then allocate new left-side MyArray
        if (size != right.size) {
            delete[] ptr; // release space
            size = right.size; // resize this object
            ptr = new int[size]; // create space for MyArray copy
        }
        for (size_t i{0}; i < size; ++i) {
            ptr[i] = right.ptr[i]; // copy array into object
        }
    }
    return *this; // enables x = y = z, for example
}


// determine if two MyArrays are equal and
// return true, otherwise return false
bool MyArray::operator==(const MyArray& right) const {
    if (size != right.size) {
        return false; // arrays of different number of elements
    }
    for (size_t i{0}; i < size; ++i) {
        if (ptr[i] != right.ptr[i]) {
            return false; // MyArray contents are not equal
        }
    }
    return true; // MyArrays are equal
}


bool MyArray::operator!=(const MyArray& right) const {
        return ! (*this == right); // invokes MyArray::operator==
}


// overloaded subscript operator for non-const MyArrays;
// reference return creates a modifiable lvalue
int& MyArray::operator[](int subscript) {
    // check for subscript out-of-range error
    if (subscript < 0 || subscript >= static_cast<int>(size)) {
        throw std::out_of_range{"Subscript out of range"};
    }
    return ptr[subscript]; // reference return
}


// overloaded subscript operator for const MyArrays
// const reference return creates an rvalue
int MyArray::operator[](int subscript) const {
    // check for subscript out-of-range error
    if (subscript < 0 || subscript >= static_cast<int>(size)) {
        throw std::out_of_range{"Subscript out of range"};
    }
    return ptr[subscript]; // returns copy of this element
}


// overloaded input operator for class MyArray;
// inputs values for entire MyArray
std::istream& operator>> (std::istream& input, MyArray& a) {
    for (size_t i{0}; i < a.size; ++i) {
        input >> a.ptr[i];
    }
    return input; // enables cin >> x >> y;
}


// overloaded output operator for class MyArray
std::ostream& operator<< (std::ostream& output, const MyArray& a) {
    // output private ptr-based array
    for (size_t i{0}; i < a.size; ++i) {
        output << a.ptr[i] << " ";
    }
    output << std::endl;
    return output; // enables cout << x << y;
}

