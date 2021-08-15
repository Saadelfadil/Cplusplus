/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadmin <mcadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:36:40 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/08/13 11:47:10 by mcadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
    Animal *animals[6] = { new Animal };
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << i->getType() << " :)" << std::endl;
    std::cout << j->getType() << " :(" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        animals[i] = new Dog();
    } 
    for (int j = 3; j < 6; j++)
    {
        animals[j] = new Cat();
    }
    
    for (size_t i = 0; i < 6; i++)
    {
        std::cout << animals[i]->getType() << " " << std::endl;
    }
    
    for (size_t i = 0; i < 6; i++)
    {
        delete animals[i];
    }
    // while(1);
}