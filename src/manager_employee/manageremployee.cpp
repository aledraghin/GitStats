#include "manageremployee.hpp"
#include <string>
#include <iostream>

using namespace std;

namespace company{
    ManagerEmployee::ManagerEmployee(string name, double salary, long idNumber, string companyName, int subordinates) 
    : Employee(name, salary, idNumber, companyName){
        this->numberOfSubordinates = subordinates; 
}

ManagerEmployee::~ManagerEmployee(){
    cout << "ManagerEmployee destructor called" << endl; // destructor
}

int ManagerEmployee::getNumberOfSubordinates(){
    return this->numberOfSubordinates; // getter
}
}