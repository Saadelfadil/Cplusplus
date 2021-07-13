/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/13 16:27:13 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : _name(std::string()), _ap(0), _curWeapon(NULL)
{
	
}

Character::Character(std::string const & name) : _name(name), _ap(40), _curWeapon(NULL)
{
	
}

Character::Character(const Character & src)
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

AWeapon *Character::getWeapon(void) const
{
	return (this->_curWeapon);
}

void Character::recoverAP()
{
	if ((this->_ap + 10) <= 40)
		this->_ap += 10;
}

void Character::equip(AWeapon* curWeapon)
{
	this->_curWeapon = curWeapon;
}

void Character::attack(Enemy* enem)
{
	// enem->takeDamage(this->_curWeapon->getDamage());
	std::cout << this->_name <<" attacks " << enem->getType() <<" with a " <<  this->getWeapon() << std::endl;
	this->_curWeapon->attack();
}

int Character::getAP(void) const
{
	return (this->_ap);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::ostream &operator<<(std::ostream &out, Character const &chara)
{
	out << chara.getName() << " has " << chara.getAP() << " AP and wields a " << chara.getWeapon() << std::endl;
	return out;
}
/* ************************************************************************** */