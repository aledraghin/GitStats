// abstract class human beeing
#ifndef HUMAN_BEING_HPP
#define HUMAN_BEING_HPP

namespace company{
    class HumanBeing {
        public:
            virtual void eat() = 0; 
            virtual void sleep() = 0;
            virtual void work() = 0;
            virtual void repeat() = 0;
};
}

#endif
