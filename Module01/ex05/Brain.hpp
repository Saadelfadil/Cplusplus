#ifndef MY_HEADER_H
#define MY_HEADER_H
#include <iostream>
#include <sstream>

class Brain {
    public :
        std::string name;
        int nbrVeins;
    public :
        Brain(std::string name, int nbrVeins);
        Brain();
    public :
        std::string identifier() const;
};

#endif