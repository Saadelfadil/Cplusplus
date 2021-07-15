/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/15 13:27:02 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : _xp(0), _name("Cure")
{
	
}

Cure::Cure(const Cure &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &		Cure::operator=(Cure const & rhs)
{
	this->_type = rhs._type;
	this->_xp = rhs._xp;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & Cure::getType(void) const
{
	return (this->_type);
}

unsigned int Cure::getXP(void) const
{
	return (this->_xp);
}

Cure * Cure::clone(void) const
{
	
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals "<< target._name << "'s wounds *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */