#include <iostream>

int main(int argc, char const *argv[])
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string& ref = str;
    std::cout << "Pointeur --> " << str << std::endl;
    std::cout << "Referance --> " << ref << std::endl;
    return (0);
}
