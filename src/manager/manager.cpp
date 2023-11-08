#include "manager.hpp"
#include <string>
#include <iostream>
using namespace std;

namespace company{
    Manager::Manager(string companyName){
        this->companyName = companyName;
    }

    Manager::~Manager(){
        cout << "Manager object was destroyed!/n";
    }

    string Manager::getCompanyName(){
        return this->companyName;
    }

    void Manager::setCompanyName(string companyName){
        this->companyName = companyName;
    }
}