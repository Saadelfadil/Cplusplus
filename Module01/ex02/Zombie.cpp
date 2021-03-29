#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}

Zombie::~Zombie()
{
    std::cout << "Good Bye Zoombie" << std::endl;
}

void Zombie::advert()
{
    std::cout << "<" << this->name << " " << this->type << "> Braiiiiiiinnnssss ..." << std::endl;
}