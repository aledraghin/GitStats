#include <string>
#include <iostream>
#include <vector>

namespace company{
   template <typename T>    
   T findEmployeeByName (std::vector<T> employees, std::string name){
       for(int i = 0; i < employees.size(); i++){
           if(employees[i].getName() == name){
               return employees[i];
           }
       }
   }
}