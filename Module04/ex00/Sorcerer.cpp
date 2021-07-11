/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/11 15:23:46 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << " , " << this->_title << " , is born!" << std::endl;
}

Sorcerer::Sorcerer( const Sorcerer & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << " , " << this->_title << " , is dead. Consequences will never be the same!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorcerer &				Sorcerer::operator=( Sorcerer const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	this->_name = rhs._name;
	this->_title = rhs._title;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i )
{
	o << "Name = " << i.get_name() << " -- Name = " << i.get_title();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Sorcerer::whoIamI(void)
{
	std::cout << "I'm "<< this->_name << " , " << this->_title << " , and I like ponies!" << std::endl;
}

std::string Sorcerer::get_name(void) const
{
	return (this->_name);
}

std::string Sorcerer::get_title(void) const
{
	return (this->_title);
}

void Sorcerer::polymorph(Victim const &obj) const
{
	obj.getPolymorphed();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */