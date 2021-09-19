/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:54:49 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/19 11:25:24 by sel-fadi         ###   ########.fr       */
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
	this->bra = new Brain();
}

Dog::Dog(const Dog & src )
{
	this->bra = new Brain(*src.bra);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Hello from Dog DESTRUCTOR ..." << std::endl;
	delete this->bra;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &	Dog::operator=(Dog const & rhs )
{
	this->bra = new Brain();
	for (int i = 0; i < 100; i++)
		this->bra->setIdea(i, rhs.bra->getIdea(i));
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