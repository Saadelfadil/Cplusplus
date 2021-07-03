#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB {
    public :
        Weapon *Human_B;
        std::string name;
    public :
        HumanB(std::string name);
    public :
        void attack();
        void setWeapon(Weapon &Human_B);
};