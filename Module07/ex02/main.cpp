/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:38 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/30 11:42:26 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void )
{
	Array<int> mini(4);
	// std::cout << mini[0] << std::endl;
	std::cout << mini.getN() << std::endl;
	// std::cout << mini[1] << std::endl;
	return 0;
}