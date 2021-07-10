/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/10 17:33:30 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30)
{
    this->_name = name;
    std::cout << "DiamondTrap Default Constructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor Called" << std::endl;
}

DiamondTrap::DiamondTrap()
{

}

DiamondTrap::DiamondTrap(DiamondTrap const &Diamond)
{
    std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
    *this = Diamond;
}

DiamondTrap & DiamondTrap::operator = (DiamondTrap const &Diamond)
{
    this->_name = Diamond._name;
    return *this;
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "Hello Iam " << this->_name << " from DiamondTrap."<< std::endl;
}