#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
};

void HumanB::setWeapon(Weapon &Human_B)
{
    this->Human_B = &Human_B;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with his " << this->Human_B->getType() << std::endl;
};