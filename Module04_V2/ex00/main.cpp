/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:36:40 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/17 17:58:11 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* cuta = new WrongCat();
    
    // const Animal* meta = new Animal();
    // const Animal* i = new Cat();
    // const Animal* j = new Dog();
    // std::cout << i->getType() << " " << std::endl;
    // std::cout << j->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound(); //will output the dog sound!
    // meta->makeSound();
    
    std::cout << wrongMeta->getType() << " " << std::endl;
    std::cout << cuta->getType() << " " << std::endl;
    wrongMeta->makeSound(); //will output the cat sound!
    cuta->makeSound(); //will output the cat sound!
    
    // delete meta;
    // delete j;
    // delete i;
}