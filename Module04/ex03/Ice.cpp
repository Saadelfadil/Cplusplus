/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/15 18:11:59 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{
	
}

Ice::Ice(const Ice &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &		Ice::operator=(Ice const & rhs)
{
	this->_type = "ice";
	this->_xp = obj._xp;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & Ice::getType(void) const
{
	return (this->_type);
}

unsigned int Ice::getXP(void) const
{
	return (this->_xp);
}

AMateria* Ice::clone() const
{
	return new Ice(this->_xp);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at "<< target._name << " *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */