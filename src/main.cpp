#include <iostream>
#include <vector>
#include <string>
#include "employee.hpp" 
#include "manager.hpp" 
using namespace std;

void displayEmployees(std::vector<Employee>& employee) {
    std::cout << "Employee List:" << std::endl;
    for (size_t i = 0; i < employee.size(); i++) {
        std::cout << "Employee " << i << ": " << employee[i].getName() << ", Manager: " << employee[i].getManager()->getCompanyName() << std::endl;
    }
}

void displayManagers( std::vector<Manager>& manager) {
    std::cout << "Manager List:" << std::endl;
    for (size_t i = 0; i < manager.size(); i++) {
        std::cout << "Manager " << i << ": " << manager[i].getCompanyName() << std::endl;
    }
}

int main() {
    int option;
    std::vector<Employee> employees;
    std::vector<Manager> managers;

    do {
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "Please choose an option: " << std::endl;
        std::cout << "1. Add a new Employee" << std::endl;
        std::cout << "2. Add a new Manager" << std::endl;
        std::cout << "3. Display all Employees" << std::endl;
        std::cout << "4. Display all Managers" << std::endl;
        std::cout << "5. Copy an Employee" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
        std::cin >> option;

        switch (option) {
            case 1: {
                std::cout << "Add a new Employee" << std::endl;
                std::string name;
                double salary;
                long idNumber;

                std::cout << "Name: ";
                std::cin >> name;
                std::cout << "Salary: ";
                std::cin >> salary;
                std::cout << "ID Number: ";
                std::cin >> idNumber;

                if (managers.empty()) {
                    std::cout << "No managers available. Please add a manager first." << std::endl;
                    break;
                }

                std::cout << "Select a Manager (enter the Manager index):" << std::endl;
                displayManagers(managers);

                int managerIndex;
                std::cin >> managerIndex;

                if (managerIndex < 0 || managerIndex >= managers.size()) {
                    std::cout << "Invalid Manager index." << std::endl;
                } else {
                    Employee employee(name, salary, idNumber, managers[managerIndex].getCompanyName());
                    employees.push_back(employee);
                    std::cout << "Employee added successfully." << std::endl;
                }
            }
            break;

            case 2: {
                std::cout << "Add a new Manager" << std::endl;
                std::string name;
                std::cin >> name;
                Manager manager(name);
                managers.push_back(manager);
                std::cout << "Manager added successfully." << std::endl;
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
                managers.push_back(copyManager);
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