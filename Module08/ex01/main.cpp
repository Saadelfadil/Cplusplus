/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:38 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/10/05 16:26:55 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <array>

int main( void )
{
	try
    {
		std::srand(time(NULL));
		Span sp = Span(1000);
		sp.addNumberRandom(1000);
		// sp.addNumber(3);
		// sp.addNumber(6);
		// sp.addNumber(16);
		// sp.addNumber(17);
		std::cout << "---- Shortest Span ----\n" << sp.shortestSpan() << std::endl;
		std::cout << "---- Longest  Span ----\n" << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	return 0;
}