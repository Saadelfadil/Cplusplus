#ifndef MY_HEADER_H
#define MY_HEADER_H
#include <iostream>

class Pony {
    public :
        std::string name;
        int age;
        Pony(std::string name, int age);
        ~Pony();
};

#endif