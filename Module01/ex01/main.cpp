/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 11:46:00 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/03 11:50:17 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombii = zombieHorde(4, "Zack");
	for (int i = 0; i < 4; i++)
	{
		zombii[i].announce();
	}
	delete[] zombii;
}