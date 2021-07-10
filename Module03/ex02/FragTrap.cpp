/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:14:06 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/10 20:16:40 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name ,100, 100, 30)
{
    
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called" << std::endl;
}

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Constructor Called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &Clap)
{
    std::cout << "FragTrap Copy Constructor Called" << std::endl;
    *this = Clap;
}

FragTrap & FragTrap::operator = ( FragTrap const &Clap)
{
    this->name = Clap.name;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    const std::string red("\033[0;31m");
    const std::string green("\033[1;32m");
    const std::string yellow("\033[1;33m");
    const std::string cyan("\033[0;36m");
    const std::string magenta("\033[0;35m");
    const std::string reset("\033[0m");
    std::cout << yellow << "\nTAKE A POSITIVE HIGH FIVE MY FRIEND\n" << reset << std::endl;
    std::cout << cyan << "    * * *  " << reset  << std::endl;
    std::cout << cyan << "    * * * *" << reset  << std::endl;
    std::cout << cyan << "*   * * * *" << reset  << std::endl;
    std::cout << cyan << " *  * * * *" << reset  << std::endl;
    std::cout << cyan << "  * * * * *" << reset  << std::endl;
    std::cout << cyan << "    * * * *\n" << reset  << std::endl;
}