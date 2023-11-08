#ifndef MANAGEREMPLOYEE_HPP
#define MANAGEREMPLOYEE_HPP
#include <iostream>
#include <string>

#include "employee.hpp"

using namespace std;

namespace company {
    class ManagerEmployee : public Employee {
        private:
            int numberOfSubordinates;

        public:
            ManagerEmployee(string name, double salary, long idNumber, string companyName, int subordinates);
            ~ManagerEmployee();

            int getNumberOfSubordinates();
        };
}

#endif
