/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadmin <mcadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:36:40 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/08/13 12:22:45 by mcadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
    Animal *animals[3] = { new Dog };
    Animal *animal[3] = { new Cat };
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << i->getType() << " :)" << std::endl;
    std::cout << j->getType() << " :(" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        animals[i] = new Dog();
    } 
    for (int j = 0; j < 3; j++)
    {
        animal[j] = new Cat();
    }
    
    for (size_t i = 0; i < 3; i++)
    {
        std::cout << animals[i]->getType() << " " << std::endl;
    }
    
    for (size_t i = 0; i < 3; i++)
    {
        std::cout << animal[i]->getType() << " " << std::endl;
    }
    for (size_t i = 0; i < 3; i++)
    {
        delete animals[i];
    }
    for (size_t i = 0; i < 3; i++)
    {
        delete animal[i];
    }
    // while(1);
}