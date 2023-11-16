#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include "employee.hpp"
#include <string>
#include <iostream>
using namespace std;

namespace company{
    // constructor
    Employee::Employee(string name, double salary, long idNumber, string companyName){
        this->name = name;
        this->salary = salary;
        this->idNumber = idNumber;
        this->manager = nullptr;
    }

    // move constructor
    Employee::Employee(Employee &&employee) {
        cout << "Move constructor called" << endl;
        this->name = employee.name;
        this->salary = employee.salary;  
        this->idNumber = employee.idNumber; 
        this->manager = std::move(employee.manager);

        employee.manager = nullptr;
    }

    // copy constructor -> alegem sa facem deep copy pentru ca alocam dinamic un nou manager
    // trimiti prin referinta ca sa faci o copie -> copy constructor
    // daca avem alte obiecte alocate dinamic atunci e deep copy, altfel e shallow copy
    Employee::Employee(const Employee &employee) {
        this->name = employee.name;
        this->salary = employee.salary;  
        this->idNumber = employee.idNumber; 

        if (employee.manager) {
            manager = make_unique<Manager>(*employee.manager);
        } else {
            manager = nullptr;
        }
    }

    // Assignment operator overloading for deep copy
    Employee& Employee::operator=(const Employee& other) {
        // daca cele 2 obiecte sunt identice -> returneaza obiectul curent
        if (this == &other) {
            return *this;
        }

        // copiem campurile din obiectul other in obiectul curent
        this->name = other.name;
        this->salary = other.salary;
        this->idNumber = other.idNumber;

        // daca managerul curent nu e null -> il stergem
        if (manager) {
            manager = nullptr;
        }

        // facem deep copy pentru manager
        if (other.manager) {
            manager = make_unique<Manager>(*other.manager); // deep copy
        }

        // returneaza obiectul curent
        return *this;
    }

    // dealocare de memorie din heap -> Destructor
    Employee::~Employee(){
         manager=nullptr;
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
        return this->manager.get();
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
        this->manager = make_unique<Manager>(*newManager);
    }

    // override
    void Employee::eat(){
        cout << "Employee " << this->name << " is eating" << endl;
    }

    void Employee::sleep(){
        cout << "Employee " << this->name << " is sleeping" << endl;
    }

    void Employee::work(){
        cout << "Employee " << this->name << " is working" << endl;
    }

    void Employee::repeat(){
        cout << "Employee " << this->name << " is repeating" << endl;
    }
}
#endif