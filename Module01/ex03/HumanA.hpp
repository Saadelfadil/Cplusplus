#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA {
    private:
        Weapon &Human_A;
        std::string name;
    public :
        HumanA(std::string name, Weapon &Human_A);
        void attack();
};