/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 11:38:39 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/03 11:49:44 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombii = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombii[i].set_name(name);
    }
    return zombii;
}