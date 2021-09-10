/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:54:49 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/03 16:38:13 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Hello from Cat CONSTRUCTOR ..." << std::endl;
	this->bra = new Brain();
}

Cat::Cat(const Cat & src )
{
	this->bra = new Brain(*src.bra);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Hello from Cat DESTRUCTOR ..." << std::endl;
	delete this->bra;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &	Cat::operator=(Cat const & rhs )
{
	this->bra = new Brain(*rhs.bra);
	return *this;
}
/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound() const
{
	std::cout << "Miaawww iam cute Cat..." << std::endl;
}

std::string Cat::getIdea( int i ) const
{
	return (this->ideas[i]);
}

void Cat::setIdea(int i, std::string idea)
{
	this->ideas[i] = idea;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */