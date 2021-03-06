/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadmin <mcadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:54:49 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/08/12 18:16:25 by mcadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Hello from Brain CONSTRUCTOR ..." << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Hello from Brain DESTRUCTOR ..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &	Brain::operator=(Brain const & rhs )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Brain::getIdea( int i ) const
{
	return (this->ideas[i]);
}

void Brain::setIdea(int i, std::string idea)
{
	this->ideas[i] = idea;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */