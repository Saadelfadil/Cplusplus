/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:14:06 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/10 13:04:54 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name , 100,50,20)
{
    std::cout << "Default Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor Called" << std::endl;
}

ScavTrap::ScavTrap()
{

}

ScavTrap::ScavTrap(ScavTrap const &Clap)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = Clap;
}

ScavTrap & ScavTrap::operator = ( ScavTrap const &Clap)
{
    this->name = Clap.name;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
    std::cout << this->name << " " << this->hitPoints << " " <<this->attackDamage << std::endl;
}