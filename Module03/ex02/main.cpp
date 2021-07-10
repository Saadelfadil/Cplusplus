/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:38 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/10 17:43:10 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap ft("camelo");

    for (int i = 0; i < 3; i++)
        ft.takeDamage(20);

    for (int i = 0; i < 3; i++)
        ft.beRepaired(20);

    ft.attack("zarafa");
    ft.highFivesGuys();

    ScavTrap st("hh");

    for (int i = 0; i < 3; i++)
        st.takeDamage(20);

    for (int i = 0; i < 3; i++)
        st.beRepaired(20);
}