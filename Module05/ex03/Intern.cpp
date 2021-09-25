/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:14:06 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/25 11:08:32 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	std::cout << "Hello Intern the Default CONSTRUCTOR [Intern]" << std::endl;
}

Intern::Intern(Intern const &obj)
{
	*this = obj;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	std::cout << "Hello form the DESTRUCTOR [Intern]" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern & Intern::operator = ( Intern const &obj)
{
    (void)(obj);
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form* Intern::makeForm(std::string formName, std::string target)
{
	std::string requests[3] = {"RobotomyRequestForm", "ShrubberyCreationForm", "PresidentialPardonForm"};
    Form *form[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	int j = -1;
	for (int i = 0; i < 3; i++)
	{
		if (formName == requests[i])
			j = i;
		else
			delete form[i];
	}
	if (j == -1)
		throw Intern::doesntExistException();
	std::cout << "Intern creates " << formName << std::endl;
	return form[j];
}

/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/

const char* Intern::doesntExistException::what() const throw()
{
    return ("Doesn't exist.");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
