/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:14:06 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/10 13:14:26 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default Constructor Called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage)
{
    this->name = name;
    this->hitPoints = hitPoints;
    this->energyPoints = energyPoints;
    this->attackDamage = attackDamage;
}

ClapTrap::ClapTrap()
{

}

ClapTrap::ClapTrap(ClapTrap const &Clap)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = Clap;
}

ClapTrap & ClapTrap::operator = ( ClapTrap const &Clap)
{
    this->name = Clap.name;
    return *this;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap <" << this->name << "> attacks <" << target << ">, causing <" << this->attackDamage << "> points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->name << " take " << amount << " points of damage!" << std::endl;
    if (this->hitPoints >= (int)amount)
        this->hitPoints -= amount;
    std::cout << "The current Hitpoints is : " << this->hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->hitPoints += amount;
    std::cout << "The current Hitpoints after Repaired is : " << this->hitPoints <<std::endl;
}