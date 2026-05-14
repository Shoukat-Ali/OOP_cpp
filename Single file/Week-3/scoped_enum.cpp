/**
 * A simple program to compare the use of scoped enums (enum class) with traditional enums in C++.
 * Traditional enums are unscoped and can lead to name conflicts, while scoped enums (enum class) provide 
 * better type safety and avoid name conflicts by requiring the use of a scope resolution operator.
 * 
 * To compile and create executable file of this program, please run the following GNU C++ command in the terminal:
 * 
 *      g++ -std=c++11 scoped_enum.cpp -o test
 */

#include <iostream>

int main() {
    using std::cout;
    using std::endl;

    // Traditional enum
    enum Color {Red=11, Green, Blue};
    Color color1 = Green; // No namespace, can cause conflicts

    // enum myColor {Red, Purple, Pink};
    // myColor color2 = Red; // No namespace, can cause conflicts

    // Scoped enum (enum class)
    enum class Shape {Circle, Square, Triangle};
    Shape shape1 = Shape::Circle; // Requires scope resolution operator

    enum class myShape {Circle, Square, Triangle};
    myShape shape2 = myShape::Circle; // Requires scope resolution operator

    enum class otherShape: unsigned int {Circle, Square, Triangle};
    otherShape shape3 = otherShape::Circle; // Requires scope resolution operator

    cout << "Traditional enum value: " << color1 << endl; // Outputs 0 (Red)
    cout << "Scoped enum value: " << static_cast<int>(shape1) << endl; // Outputs 0 (Circle), implicit conversion not allowed
    // cout << "Scoped enum with underlying type value: " << shape3 << endl; // Outputs 0 (Circle)

    return 0;
}