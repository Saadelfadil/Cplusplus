/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/15 19:34:48 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : _xp(0)
{
	
}

Character::Character(const Character &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &		Character::operator=(Character const & rhs)
{
	this->_type = rhs._type;
	this->_xp = rhs._xp;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & Character::getType(void) const
{
	return (this->_type);
}

unsigned int Character::getXP(void) const
{
	return (this->_xp);
}

Character * Character::clone(void) const
{
	
}

void Character::use(ICharacter &target)
{

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */