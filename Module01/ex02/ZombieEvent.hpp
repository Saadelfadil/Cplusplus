#ifndef MY_HEADER_H
#define MY_HEADER_H
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {
    public :
        std::string type;
        ZombieEvent(std::string type);
        ~ZombieEvent();
    public :
        void setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        void randomChump();
};

#endif