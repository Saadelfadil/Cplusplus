/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:54:49 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/19 11:25:20 by sel-fadi         ###   ########.fr       */
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
	this->bra = new Brain();
	for (int i = 0; i < 100; i++)
		this->bra->setIdea(i, rhs.bra->getIdea(i));
	return *this;
}
/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound() const
{
	std::cout << "Miaawww iam cute Cat..." << std::endl;
}




/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */