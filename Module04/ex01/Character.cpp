/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/12 19:00:32 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string const & name) : _name(name)
{
	
}

Character(int type) : _type(type)
{
	
}

Character(std::string const & name, int type) : _name(name), _type(type)
{
	
}

Character::Character(const Character & src)
{
	
}

Character::Character()
{
	
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
	this->_hp = rhs._hp;
	this->_type = rhs._type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Character::getType() const
{
	return (this->_type);
}

int Character::getHP() const
{
	return (this->_hp);
}

void Character::takeDamage(int damage)
{
	if (damage > 0 && this->_hp > 0)
		this->_hp -= damage;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */