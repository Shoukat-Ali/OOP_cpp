/**
 * This is an attempt to demonstrate abstract classes and pure virtual function based on the example from the textbook.
 * 
 * * Technique-1: To compile and create executable file of this program, please run the following GNU C++ command in a terminal:
 * 
 *      g++ -Wall -Werror -std=c++11 all_employees_test.cpp ../../src/Week-14/employee.cpp ../../src/Week-14/salary_employee.cpp ../../src/Week-14/commission_employee.cpp ../../src/Week-14/salarypluscommission_employee.cpp -o test
 * 
 * Technique-2: We compile class-implementation and client-code files separately to create object file. 
 * After that, we link the object files to create an executable file. 
 * Please run the following GNU C++ commands in a terminal:
 * 
 *      g++ -c -Wall -Werror -std=c++11 all_employees_test.cpp -o all_employees_test.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-14/employee.cpp -o employee.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-14/salary_employee.cpp -o salary_employee.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-14/commission_employee.cpp -o commission_employee.o
 *      g++ -c -Wall -Werror -std=c++11 ../../src/Week-14/salarypluscommission_employee.cpp -o salarypluscommission_employee.o
 *      g++ all_employees_test.o employee.o salary_employee.o commission_employee.o -o test
 * 
 */

#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

#include "../../header/Week-14/employee.hpp"
#include "../../header/Week-14/salary_employee.hpp"
#include "../../header/Week-14/commission_employee.hpp"
#include "../../header/Week-14/salarypluscommission_employee.hpp"

int main() {
    // Attempt to create objects
    // Note that object life is within the try block because local
    try{
        SalaryEmployee sEmp{"Abc", "Def", "34201-1234567-1", 80000};
        CommissionEmployee commEmp{"Ghi", "Ijk", "34201-1234567-2", 10000, 0.35};
        SalaryPlusCommissionEmployee spEmp{"Lmn", "Opq", "34201-1234567-3", 5000, 0.15, 3000};

        std::vector<Employee*> empPtr{&sEmp, &commEmp, &spEmp};
        std::cout << std::fixed << std::setprecision(2);
        for (auto ptr: empPtr) {
            std::cout << ptr->toString() << "\nEarnings: " << ptr->earnings() << std::endl;
            std::cout << std::string(25, '=') << std::endl;
        }
    }
    catch(const std::invalid_argument& excp) {
        std::cout << "Exception: " << excp.what() << std::endl;
    }
    return 0;

}