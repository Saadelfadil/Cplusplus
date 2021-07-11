/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:26 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/05 12:55:27 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Human_A) : name(name), Human_A(Human_A)
{
    
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->Human_A.getType() << std::endl;
};