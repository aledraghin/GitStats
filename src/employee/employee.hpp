#include <string>
#include "manager.hpp"
#include "human-being.hpp"
#include <memory>

using namespace std;

namespace company {
    class Employee : public HumanBeing {
        private:
            string name;
            double salary;
            long idNumber;
            unique_ptr<Manager> manager;
        public:
            Employee(string name, double salary, long idNumber, string comanyName);
            Employee(Employee &&employee); // move constructor
            ~Employee(); // destructor
            Employee(const Employee &employee); 
            Employee& operator=(const Employee& other); // assignment operator overloading

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