#ifndef MANAGER_HPP
#define MANAGER_HPP

#include <string>
#include <iostream>
#include <memory>

#include "janitor.hpp"

using namespace std;

namespace company{
    class Manager{
        private:
            string companyName;
            shared_ptr<Janitor> janitor;
        public:
            Manager(string companyName);
            ~Manager();

            string getName();

            shared_ptr<Janitor> getJanitor();

            void setName(string companyName);

            void setJanitor(shared_ptr<Janitor> janitor);
};
}

#endif