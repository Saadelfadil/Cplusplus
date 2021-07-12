/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/12 20:04:38 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string const & name) : _name(name)
{
	this->_ap = 40;
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

void Character::recoverAP()
{
	if ((this->_ap + 10) <= 40)
		this->_ap += 10;
}

void Character::equip(AWeapon* curWeapon)
{
	// return (this->_curWeapon);
}

void Character::attack(Enemy* enem)
{
	enem->takeDamage(this->_curWeapon->getDamage());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */