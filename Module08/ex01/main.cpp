/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:38 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/10/04 13:21:55 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <array>

int main( void )
{
	Span spa(3);
	spa.addNumber(5);
	spa.addNumber(10);
	spa.addNumber(18);

	std::cout << spa.shortestSpan() << std::endl;
	return 0;
}