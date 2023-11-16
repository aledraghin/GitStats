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

    string Manager::getName(){
        return this->companyName;
    }

    shared_ptr<Janitor> Manager::getJanitor(){
        return this->janitor;
    }

    void Manager::setName(string companyName){
        this->companyName = companyName;
    }

    void Manager::setJanitor(shared_ptr<Janitor> janitor){
        this->janitor = janitor;
    }
}