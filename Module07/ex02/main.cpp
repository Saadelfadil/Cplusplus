/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:38 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/29 16:47:54 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
	int array[5] = {0, 1, 2, 3, 4};
	iter<int>(array, 5, printElement);
	std::cout << "------------------" << std::endl;
	std::string array2[5] = {"Saad", "Hicham", "Alae", "Achraf", "Hafid"};
	::iter<std::string>(array2, 5, printElement);
	return 0;
}