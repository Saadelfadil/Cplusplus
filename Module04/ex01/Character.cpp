/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/14 09:59:17 by sel-fadi         ###   ########.fr       */
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
	if (this->_ap < this->_curWeapon->getAPCost())
		return ;
	this->_ap -= this->_curWeapon->getAPCost();
	std::cout << this->_name <<" attacks " << enem->getType() <<" with a " <<  this->getWeapon()->getName() << std::endl;
	this->_curWeapon->attack();
	enem->takeDamage(this->_curWeapon->getDamage());
	if (enem->getHP() == 0)
		enem->~Enemy();
}

int Character::getAP(void) const
{
	return (this->_ap);
}

std::string const Character::getName() const
{
	return this->_name;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::ostream &operator<<(std::ostream &out, Character const &chara)
{
	out << chara.getName() << " has " << chara.getAP() << " AP and ";
	if (chara.getWeapon())
		out <<  "wields a " << chara.getWeapon()->getName();
	else
		out <<  "is unarmed";
	out << std::endl;
	return out;
}
/* ************************************************************************** */