#ifndef MANAGEREMPLOYEE_HPP
#define MANAGEREMPLOYEE_HPP
#include <iostream>
#include <string>

#include "employee.hpp"

using namespace std;

namespace company {
    class ManagerEmployee : public Employee { // mostenire 
        private:
            int numberOfSubordinates; 

        public:
            ManagerEmployee(string name, double salary, long idNumber, string companyName, int subordinates); // constructor
            ~ManagerEmployee(); // destructor

            int getNumberOfSubordinates(); // getter
        };
}

#endif
