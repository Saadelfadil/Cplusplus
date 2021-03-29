#pragma once
#include <iostream>

class Weapon {
    public :
        std::string type;
    public :
        Weapon(std::string type);
        Weapon();
    public :
        const std::string &getType() const;
        void setType(std::string type);
};