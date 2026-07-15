/**
 * This is a simple example to demonstrate composition. 
 * The object(s) of MyClass1 will be used as a member variable in MyClass2. 
 */

#ifndef MY_CLASS1_HPP
#define MY_CLASS1_HPP

class MyClass1 {
public:
    explicit MyClass1(int = 0);     // Default constructor due to default parameter
    void setX(int);
    int getX() const;
    ~MyClass1();        // Destructor

private:
    int x;
};

#endif