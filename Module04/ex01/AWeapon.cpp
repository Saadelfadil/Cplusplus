/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/13 16:44:26 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
	
}

AWeapon::AWeapon(const AWeapon &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AWeapon::~AWeapon()
{
	
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AWeapon &		AWeapon::operator=(AWeapon const & rhs)
{
	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string AWeapon::getName() const
{
	return (this->_name);
}

int AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int AWeapon::getDamage() const
{
	return (this->_damage);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */