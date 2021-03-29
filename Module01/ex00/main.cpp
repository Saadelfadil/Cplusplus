#include "Pony.hpp"

void ponyOnTheStack()
{
    std::cout << "--- Stack ---" << std::endl;
    Pony p1 = Pony("yolka", 4);
    std::cout << "Pony Born !" << std::endl;
}

void ponyOnTheHeap()
{
    std::cout << "--- Heap ---" << std::endl;
    Pony *p2 = new Pony("panto", 2);
    std::cout << "Pony Born !" << std::endl;
    delete p2;
}

int main()
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}