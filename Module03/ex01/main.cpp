/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:38 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/10 17:49:01 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap ft("FR4GGY",10,30,70);
    ClapTrap ft2(ft);

    for (int i = 0; i < 3; i++)
        ft.takeDamage(20);

    for (int i = 0; i < 3; i++)
        ft.beRepaired(20);

    ScavTrap st("pardalis");
    ScavTrap st2(st);

    for (int i = 0; i < 3; i++)
        st.takeDamage(20);

    for (int i = 0; i < 3; i++)
        st.beRepaired(20);

    st.attack("kawkab");
    st.guardGate();

}