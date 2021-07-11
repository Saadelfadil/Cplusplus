/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:54:49 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/11 17:29:19 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Peon::Peon(std::string name) : Victim(name)
{
	this->_name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon & src ) : Victim(src._name)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Peon &	Peon::operator=(Peon const & rhs )
{
	this->_name = rhs._name;
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Peon const & i )
{
	o << "I'm " << i.get_name() << " and I like otters!" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		Peon::getPolymorphed() const
{
	std::cout << this->get_name() << " has been turned into a pink pony!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */