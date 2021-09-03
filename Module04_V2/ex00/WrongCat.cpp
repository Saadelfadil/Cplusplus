/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadmin <mcadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:54:49 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/08/12 18:24:57 by mcadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "Hello from WrongCat CONSTRUCTOR ..." << std::endl;
}

WrongCat::WrongCat(const WrongCat & src )
{
	this->_type = src._type;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "Hello from WrongCat DESTRUCTOR ..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &	WrongCat::operator=(WrongCat const & rhs )
{
	this->_type = rhs._type;
	return *this;
}
/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongCat::makeSound() const
{
	std::cout << "Miaawww iam cute WrongCat..." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */