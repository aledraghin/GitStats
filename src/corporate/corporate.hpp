#include <iostream>
#include <string>
#include <vector>

namespace company{
    template <typename T>
    class Corporate{
        private:
            std::string name;
            std::vector<T> employees;
        public:
            Corporate(std::string name){
                this->name = name;
            }

            ~Corporate(){
                std::cout << "Corporate object was destroyed!" << std::endl;
            }

            std::string getName(){
                return this->name;
            }

            void setName(std::string name){
                this->name = name;
            }

            void addEmployee(T employee){
                this->employees.push_back(employee);
            }

            void removeEmployee(T employee){
                for(int i = 0; i < this->employees.size(); i++){
                    if(this->employees[i] == employee){
                        this->employees.erase(this->employees.begin() + i);
                    }
                }
            }

            void printEmployees(){
                for(int i = 0; i < this->employees.size(); i++){
                    std::cout << this->employees[i].getCompanyName() << std::endl;
                }
            }
    };
}