/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria copy.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/15 13:10:32 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria() : _xp(0)
{
	
}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &		AMateria::operator=(AMateria const & rhs)
{
	this->_type = rhs._type;
	this->_xp = rhs._xp;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int AMateria::getXP(void) const
{
	return (this->_xp);
}

AMateria * AMateria::clone(void) const
{
	
}

void AMateria::use(ICharacter &target)
{

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */