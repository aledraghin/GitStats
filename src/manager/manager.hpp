#ifndef MANAGER_HPP
#define MANAGER_HPP

#include <string>
using namespace std;

class Manager{
    private:
        string companyName;
    public:
        Manager(string companyName);
        ~Manager();

        string getCompanyName();

        void setCompanyName(string companyName);
};

#endif