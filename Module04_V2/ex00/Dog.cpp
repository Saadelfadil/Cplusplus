/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadmin <mcadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:54:49 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/08/12 18:24:41 by mcadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Hello from Dog CONSTRUCTOR ..." << std::endl;
}

Dog::Dog(const Dog & src )
{
	this->_type = src._type;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Hello from Dog DESTRUCTOR ..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &	Dog::operator=(Dog const & rhs )
{
	this->_type = rhs._type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() const
{
	std::cout << "Haaaw haaaw iam a bad Dog..." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */