/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:54:49 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/19 11:54:17 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "Hello from Animal CONSTRUCTOR ..." << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Hello from Animal DESTRUCTOR ..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &	Animal::operator=(Animal const & rhs )
{
	this->_type = rhs._type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Animal::getType() const
{
	return this->_type;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */