/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/15 11:56:46 by sel-fadi         ###   ########.fr       */
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
	std::cout << "I’ll be back..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &		AMateria::operator=(AMateria const & rhs)
{
	this->assaultT = rhs.assaultT;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria* AMateria::clone() const
{
	return (this->assaultT);
}

void AMateria::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AMateria::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AMateria::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */