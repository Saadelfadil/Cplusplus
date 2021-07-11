/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:32 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/05 12:55:33 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
};

void HumanB::setWeapon(Weapon &Human_B)
{
    this->Human_B = &Human_B;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with his " << this->Human_B->getType() << std::endl;
};