/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:38 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/10 13:15:52 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
        ClapTrap Clap("Saad");
        Clap.attack("Zineb");
        Clap.takeDamage(3);
        Clap.beRepaired(3);
        ScavTrap Scav("Saad");
        Scav.guardGate();
        Scav.attack("ikram");
        Scav.takeDamage(2);
        Scav.beRepaired(2);
        return 0;
}