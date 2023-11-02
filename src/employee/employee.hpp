#include <string>
#include "manager.hpp"
using namespace std;

class Employee{
    private:
        string name;
        double salary;
        long idNumber;
        Manager *manager;
    public:
        Employee(string name, double salary, long idNumber);
        ~Employee();
        Employee(const Employee &employee);
        Employee& operator=(const Employee& other);

        string getName();
        double getSalary();
        long getIdNumber();
        Manager* getManager();

        void setName(string name);
        void setSalary(double salary);
        void setIdNumber(long idNumber);
        void setManager(Manager *newManager);
};