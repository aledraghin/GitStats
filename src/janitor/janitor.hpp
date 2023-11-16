#ifndef JANITOR_HPP
#define JANITOR_HPP

#include "human-being.hpp"
#include <string>

namespace company{
    class Janitor : public HumanBeing {
        private:
            std::string companyName;
        public:
            Janitor(std::string companyName);
            ~Janitor();	
            void eat() override;
            void sleep() override;
            void work() override;
            void repeat() override;
            std::string getName();
    };
}

#endif