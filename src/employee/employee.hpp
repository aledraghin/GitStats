#include <string>
#include "manager.hpp"
#include "human-being.hpp"
using namespace std;

namespace company {
    class Employee : public HumanBeing {
        private:
            string name;
            double salary;
            long idNumber;
            Manager *manager;
        public:
            Employee(string name, double salary, long idNumber, string comanyName);
            Employee(Employee &&employee);
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

            void eat() override;
            void sleep() override;
            void work() override;
            void repeat() override;
    };   
}