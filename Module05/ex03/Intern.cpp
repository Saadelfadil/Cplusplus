/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadmin <mcadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:14:06 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/24 13:25:42 by mcadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	std::cout << "Hello Intern the Default CONSTRUCTOR" << std::endl;
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
	std::string requests[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form *form[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	int j = 0;
	for (int i = 0; i < 3; i++)
	{
		if (formName == requests[i])
			j = i;
		else
			delete form[i];
	}
	if (j == 0)
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
