/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:07:57 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/04/04 12:08:11 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type)
{
	this->type = type;
}

void ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *z1 = new Zombie(name, this->type);
    return z1;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "Good Bye Zoombie Event-san" << std::endl;
}

void ZombieEvent::randomChump()
{
    std::string randomName;
    int i;

    randomName = "";
    i = -1;
	while (++i < 7)
		randomName.push_back((char)((rand() % 26) + 'a'));
    Zombie addZombie(randomName, this->type);
    addZombie.advert();
}