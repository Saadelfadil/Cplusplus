/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/10 17:32:51 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap
{
    private:
        std::string _name;
    public :
        DiamondTrap(DiamondTrap const &Diamond);
        DiamondTrap & operator = (DiamondTrap const &Diamond);
        DiamondTrap(std::string name);
        DiamondTrap();
        ~DiamondTrap();
        void attack(std::string const &target);
        void whoAmI();
};