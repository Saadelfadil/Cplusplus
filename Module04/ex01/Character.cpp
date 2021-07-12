/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/12 19:00:36 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string const & name) : _name(name)
{
	
}

Character::Character(int type) : _type(type)
{
	
}

Character::Character(std::string const & name, int type) : _name(name), _type(type)
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
	this->_name = rhs._name;
	this->_ap = rhs._ap;
	this->_curWeapon = rhs._curWeapon;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::recoverAP();
{
	return (this->_ap);
}

void Character::equip(AWeapon* curWeapon)
{
	return (this->_curWeapon);
}

void Character::attack(Enemy* enem)
{
	return (this->_enem);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */