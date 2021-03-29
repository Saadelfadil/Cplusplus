#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
    Zombie *zombies = new Zombie[n];
    std::string randomName;
    int i;
    int j;

    randomName = "";
    i = -1;
    while (++i < n)
    {
        j = -1;
        while (++j < 7)
            randomName.push_back((char)((rand() % 26) + 'a'));
        zombies[i].name = randomName;
        zombies[i].type = "Dead";
        zombies[i].advert();
    }
    delete [] zombies;
}

ZombieHorde::~ZombieHorde()
{
    std::cout << "The End!" << std::endl;
}