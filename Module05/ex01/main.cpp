/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:38 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/02 11:45:31 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Form		form1("chadat sokna", 188, 1);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try {
	    Form		form2("3aqd izdiad", 1, 1);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
	Bureaucrat	bureaucrat1("qaid", 1);
	Bureaucrat	bureaucrat2("mqadem", 149);

	try
	{
		form2.beSigned(bureaucrat2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		form2.beSigned(bureaucrat1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << bureaucrat1 << std::endl;
	std::cout << bureaucrat2 << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	return 0;
}