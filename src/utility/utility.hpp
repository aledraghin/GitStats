#include <string>
#include <iostream>
#include <vector>

namespace company{
    template <typename T>
    T findEmployeeByName(const std::vector<T>& employees, const std::string& name) {
        for (const T& employee : employees) {
            if (employee.getName() == name) {
                return employee;
            }
        }
        throw std::runtime_error("User not found!");
    }
}