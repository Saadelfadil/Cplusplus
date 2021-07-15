/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/15 13:24:47 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : _xp(0), _name("ice")
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
	this->_type = rhs._type;
	this->_xp = rhs._xp;
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

Ice * Ice::clone(void) const
{
	
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at "<< target._name << " *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */