#ifndef MY_HEADERR_H
#define MY_HEADERR_H
#include <iostream>

class Zombie {
    public :
        std::string type;
        std::string name;
    public :
        Zombie();
        Zombie(std::string type, std::string name);
        ~Zombie();
        void advert();
};

#endif