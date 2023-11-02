#include "employee.hpp"
#include <string>
#include <iostream>
using namespace std;

// constructor
Employee::Employee(string name, double salary, long idNumber){
    std::cout<<"apelat";
    this->name = name;
    this->salary = salary;
    this->idNumber = idNumber;
    this->manager = new Manager(name);
}

// copy constructor -> alegem sa facem deep copy pentru ca alocam dinamic un nou manager
// trimiti prin referinta ca sa faci o copie -> copy constructor
// daca avem alte obiecte alocate dinamic atunci e deep copy, altfel e shallow copy
Employee::Employee(const Employee &employee) {
    this->name = employee.name;
    this->salary = employee.salary;  
    this->idNumber = employee.idNumber; 
    this->manager = new Manager(*(employee.manager));

    
    if (employee.manager) {
        manager = new Manager(*employee.manager);
    } else {
        manager = nullptr;
    }
}

// Assignment operator overloading for deep copy
Employee& Employee::operator=(const Employee& other) {
    if (this == &other) {
        // Self-assignment, no action needed
        return *this;
    }

    // Copy the data members
    this->name = other.name;
    this->salary = other.salary;
    this->idNumber = other.idNumber;

    // Delete the existing manager if it exists
    if (manager) {
        delete manager;
        manager = nullptr;
    }

    // Perform a deep copy of the manager object
    if (other.manager) {
        manager = new Manager(*other.manager);
    }

    return *this;
}

// dealocare de memorie din heap -> Destructor
Employee::~Employee(){
    delete manager;
}

// getter
string Employee::getName(){
    return this->name;
}

double Employee::getSalary(){
    return this->salary;
}

long Employee::getIdNumber(){
    return this->idNumber;
}

Manager* Employee::getManager(){
    return this->manager;
}

// setter
void Employee::setName(string name){
    this->name = name;
}
void Employee::setSalary(double salary){
    this->salary = salary;
}
void Employee::setIdNumber(long idNumber){
    this->idNumber = idNumber;
}

void Employee::setManager(Manager *newManager) {
    this->manager = newManager;
}
