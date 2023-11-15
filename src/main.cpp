#include <iostream>
#include <vector>
#include <string>
#include "employee.hpp" 
#include "manager.hpp" 

using namespace std;
using namespace company;

void displayEmployees(vector<Employee>& employee) {
cout << "Employee List:" << endl;
    for (size_t i = 0; i < employee.size(); i++) {
        cout << "Employee " << i << ": " << employee[i].getName() << ", Manager: " << employee[i].getManager()->getCompanyName() << endl;
    }
}

void displayManagers( vector<Manager>& manager) {
    cout << "Manager List:" << endl;
    for (size_t i = 0; i < manager.size(); i++) {
    cout << "Manager " << i << ": " << manager[i].getCompanyName() << endl;
    }
}

int main() {

    int option;
    vector<Employee> employees;
    vector<Manager> managers;

    do {
        cout << "-------------------------------------------" << endl;
        cout << "Please choose an option: " << endl;
        cout << "1. Add a new Employee" << endl;
        cout << "2. Add a new Manager" << endl;
        cout << "3. Display all Employees" << endl;
        cout << "4. Display all Managers" << endl;
        cout << "5. Copy an Employee" << endl;
        cout << "0. Exit" << endl;
        cout << "-------------------------------------------" << endl;
        cin >> option;

        switch (option) {
            case 1: {
                cout << "New employee" << endl;
                string name;
                double salary;
                long idNumber;

                cout << "Name: ";
                cin >> name;
                cout << "Salary: ";
                cin >> salary;
                cout << "ID Number: ";
                cin >> idNumber;

                cout << "Select the Manager index:" << endl;
                displayManagers(managers);

                int managerIndex;
                cin >> managerIndex;

                if (managerIndex < 0 || managerIndex >= managers.size()) {
                    cout << "Invalid index" << endl;
                } else {
                    Employee employee(name, salary, idNumber, managers[managerIndex].getCompanyName());
                    employees.push_back(move(employee));  // move constructor 
                    cout << "Employee added " << endl;
                    employee.eat();
                    employee.sleep();
                    employee.work();
                    employee.repeat();
                }
            }
            break;

            case 2: {
                cout << "New Manager" << endl;
                string companyName;
                cin >> companyName;
                Manager manager(companyName);
                managers.push_back(manager); // copy constructor
                cout << "Manager added" << endl;
            }
            break;

            case 3: {
                displayEmployees(employees);
            }
            break;

            case 4: {
                displayManagers(managers);
            }
            break;

            case 5: {
                Manager manager = Manager("CONTI");
                Manager copyManager = manager;
                managers.push_back(copyManager); // copy constructor
            }
            break;

            case 0:
                std::cout << "Exit" << std::endl;
                break;

            default:
                std::cout << "Invalid option" << std::endl;
                break;
        }
    } while (option != 0);
}