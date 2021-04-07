/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:18 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/04/04 12:08:19 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}

Zombie::~Zombie()
{
    std::cout << "Good Bye Zoombie" << std::endl;
}

void Zombie::advert()
{
    std::cout << "<" << this->name << " " << this->type << "> Braiiiiiiinnnssss ..." << std::endl;
}