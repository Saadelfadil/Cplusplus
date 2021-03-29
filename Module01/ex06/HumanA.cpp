#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Human_A)
: name(name), Human_A(Human_A)
{

}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->Human_A.getType() << std::endl;
};