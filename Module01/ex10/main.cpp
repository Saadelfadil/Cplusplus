#include <iostream>
#include "Human.hpp"
#include "Brain.hpp"

int main()
{
    Human bob;
    std::cout << bob.identifier() << std::endl;
    std::cout << bob.mybrain.identifier() << std::endl;
    return 0;
}