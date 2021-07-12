/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:54:49 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/11 18:04:50 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!"<< std::endl;
}

Victim::Victim(const Victim & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Victim &	Victim::operator=( Victim const & rhs )
{
	this->_name = rhs._name;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Victim const & i )
{
	o << "I'm " << i.get_name() << " and I like otters!" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Victim::get_name(void) const
{
	return (this->_name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */