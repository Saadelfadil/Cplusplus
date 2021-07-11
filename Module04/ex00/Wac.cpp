/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wac.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:54:49 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/11 17:39:35 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wac.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Wac::Wac(std::string name) : Victim(name)
{
	this->_name = name;
	std::cout << "Wog Wog." << std::endl;
}

Wac::Wac(const Wac & src ) : Victim(src._name)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Wac::~Wac()
{
	std::cout << "Pieeww..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Wac &	Wac::operator=(Wac const & rhs )
{
	this->_name = rhs._name;
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Wac const & i )
{
	o << "I'm " << i.get_name() << " and I like football!" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		Wac::getPolymorphed() const
{
	std::cout << this->get_name() << " has been turned into a red moly!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */