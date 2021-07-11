/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 11:36:58 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/03 11:43:24 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "Good Bye Zoombie " << this->name << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::announce()
{
    std::cout << "<" << this->name  << "> Braiiiiiiinnnssss ..." << std::endl;
}