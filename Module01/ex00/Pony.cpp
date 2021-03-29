#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name, int age)
{
    this->name = name;
    this->age = age;
}

Pony::~Pony()
{
    std::cout << "Pony died !" << std::endl;
}