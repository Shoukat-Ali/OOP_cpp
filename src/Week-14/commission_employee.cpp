#include <stdexcept>
#include <sstream>
#include <iomanip>
#include "../../header/Week-14/commission_employee.hpp"

CommissionEmployee::CommissionEmployee(const std::string& fn, const std::string& ln, const std::string& cnic, 
                        double sale, double rate) : Employee{fn, ln, cnic} {
        setGrossSales(sale);
        setCommissionRate(rate);
}
    

void CommissionEmployee::setGrossSales(const double& sale) {
    if (sale < 0.0) {
        throw std::invalid_argument("Gross sales must be non-negative");
    }
    grossSales = sale;
} 
    
double CommissionEmployee::getGrossSales() const {
    return grossSales;
} 
    
void CommissionEmployee::setCommissionRate(const double& rate) {
    if (rate <= 0.0 || rate >= 1.0) {
        throw std::invalid_argument("Commission rate must be between 0.0  and 1.0 ");
    }
    commissionRate = rate;
}
    
double CommissionEmployee::getCommissionRate() const {
    return commissionRate;
}
    
 
double CommissionEmployee::earnings() const {
    return getCommissionRate() * getGrossSales();
} 
    
std::string CommissionEmployee::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output  << "Comission Employee: " << Employee::toString()
            << "\nGross Sales: " << getGrossSales()
            << "\nCommission Rate: " << getCommissionRate();
    return output.str();
}