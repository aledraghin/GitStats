#include "janitor.hpp"
#include <string>
#include <iostream>

namespace company{
    Janitor::Janitor(std::string companyName){
        this->companyName = companyName;
    }

    Janitor::~Janitor(){
        std::cout << "Janitor object was destroyed!/n";
    }

    void Janitor::eat(){
        std::cout << "Janitor is eating!/n";
    }

    void Janitor::sleep(){
        std::cout << "Janitor is sleeping!/n";
    }

    void Janitor::work(){
        std::cout << "Janitor is working!/n";
    }

    void Janitor::repeat(){
        std::cout << "Janitor is repeating!/n";
    }

    std::string Janitor::getName(){
        return this->companyName;
    }
}