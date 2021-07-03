#include "HumanA.hpp"

class HumanB {
    private :
        Weapon *Human_B;
        std::string name;
    public :
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon &Human_B);
};