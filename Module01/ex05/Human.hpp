#ifndef MY_HEADERR_H
#define MY_HEADERR_H
#include <iostream>
#include <sstream>
#include "Brain.hpp"

class Human {
    public :
        const Brain mybrain;
    public :
        Human();
    public :
        std::string identifier();
};

#endif