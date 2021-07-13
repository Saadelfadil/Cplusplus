/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/13 09:28:41 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
	
}

PowerFist::PowerFist( const PowerFist & src )
{
	
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PowerFist::~PowerFist()
{
	
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PowerFist &		PowerFist::operator=(PowerFist const & rhs)
{
	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PowerFist::attack()
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */