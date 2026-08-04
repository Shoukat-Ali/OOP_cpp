/**
 * This program is an attempt to show inheritance hierarchy and access using public and protected inheritance.
 * 
*/

#include <iostream>


class Base {
    protected:
        int x;      // directly accessible to drived classes
    private:
        int y;      // No outside access
    public:
        // Rule of 3: customize constructor, customize destructor, and customize copy constructor
        Base(): x{0}, y{0} { 
            // std::cout << "Base default constructor\n";
        }
        Base(int argx, int argy): x{argx}, y{argy} { 
            // std::cout << "Base parameterized constructor\n";
        }
        ~Base() { 
            x = 0; 
            y = 0;
            // std::cout << "Base destructor\n";  
        }
        Base(const Base& obj): x{obj.x}, y{obj.y} {
            // std::cout << "Base copy constructor\n";
        }

        int get_private_data() {
            return y; 
        }
        int get_protected_data() {
            return x; 
        }
};


// Public inheritance: public members of Base are public in Drvd1
class Drvd1: public Base {
    public:
        int Drvd1_get_private_data() {
            return Base::get_private_data();      // Indirect access 
        }

        int Drvd1_get_protected_data() {
            return x;       // Direct access
        }
};


// Protected inheritance: public members of Base are protected in Drvd2
class Drvd2: protected Base {
    public:
        int Drvd2_get_private_data() {
            return Base::get_private_data();      // Indirect access 
        }

        int Drvd2_get_protected_data() {
            return x;   // Direct access 
        }
};


int main() {
    using std::cin;
    using std::cout;
    // Base bObj;
    Base bObj(3, 7);
    Drvd1 d1Obj;
    Drvd2 d2Obj;

    cout << "Base Class\n\tprivate data: " << bObj.get_private_data() 
         <<"\n\tprotected data: " << bObj.get_protected_data() << "\n"; 

    // Derived class public inheritance using its own public member functions
    cout << "Derived1 Class\n\tBase private data: " << d1Obj.Drvd1_get_private_data() 
         <<"\n\tBase protected data: " << d1Obj.Drvd1_get_protected_data() << "\n";
    // Derived class public inheritance using base class's public member functions
    // cout << "Derived1 Class\n\tBase public get_private_data(): " << d1Obj.get_private_data() 
    //      <<"\n\tBase public get_protected_data(): " << d1Obj.get_protected_data() << "\n";

    // Derived class protected inheritance using its own public member functions
    cout << "Derived2 Class\n\tBase private data: " << d2Obj.Drvd2_get_private_data() 
         <<"\n\tBase protected data: " << d2Obj.Drvd2_get_protected_data() << "\n";
    // Derived class protected inheritance using base class's public member functions
    // cout << "Derived2 Class\n\tBase public get_private_data(): " << d2Obj.get_private_data() 
    //      <<"\n\tBase public get_protected_data(): " << d2Obj.get_protected_data() << "\n";

    return 0;
}