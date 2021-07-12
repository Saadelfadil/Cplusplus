/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/12 12:37:51 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
	
}

PlasmaRifle::PlasmaRifle( const PlasmaRifle & src )
{
	
}

PlasmaRifle::PlasmaRifle()
{
	
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PlasmaRifle::~PlasmaRifle()
{
	
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PlasmaRifle &		PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PlasmaRifle::attack()
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */