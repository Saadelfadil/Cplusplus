/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/14 16:35:25 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

TacticalMarine &		TacticalMarine::operator=(TacticalMarine const & rhs)
{
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

TacticalMarine* TacticalMarine::clone() const
{
	
}

void TacticalMarine::battleCry() const
{

}

void TacticalMarine::rangedAttack() const
{

}

void TacticalMarine::meleeAttack() const
{

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */