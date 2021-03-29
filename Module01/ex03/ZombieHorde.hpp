#ifndef MY_HEADER_H
#define MY_HEADER_H
#include <iostream>
#include "Zombie.hpp"

class ZombieHorde {
    public :
        std::string name;
    public :
        ZombieHorde(int n);
        ~ZombieHorde();
};

#endif