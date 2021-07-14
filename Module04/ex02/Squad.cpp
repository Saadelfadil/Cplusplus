/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/14 13:58:37 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad() : _nbrSquad(0), _spaceMarine(nullptr)
{
	
}

Squad::Squad(const Squad &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &		Squad::operator=(Squad const & rhs)
{
	this->_nbrSquad = rhs._nbrSquad;
	this->_spaceMarine = rhs._spaceMarine;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int Squad::getCount() const
{
	return (this->_nbrSquad);
}

ISpaceMarine* Squad::getUnit(int nbrUnit) const
{
	if (this->_nbrSquad == 0 || nbrUnit < 0 || nbrUnit >= _nbrSquad)
		return (nullptr);
	return (this->_spaceMarine[nbrUnit]);
}

int Squad::push(ISpaceMarine* spaceMar)
{
	if (!spaceMar)
		return (this->_nbrSquad);
	if (this->_spaceMarine)
	{
		for (int i = 0; i < this->_nbrSquad; i++)
			if (this->_spaceMarine[i] == spaceMar)
				return (this->_nbrSquad);
		ISpaceMarine **cpy = new ISpaceMarine*[this->_nbrSquad + 1];
		for (int i = 0; i < this->_nbrSquad; i++)
			cpy[i] = this->_spaceMarine[i];
		delete[] this->_spaceMarine;
		this->_spaceMarine = cpy;
		this->_spaceMarine[this->_nbrSquad] = spaceMar;
		this->_nbrSquad++;
	}
	else
	{
		this->_spaceMarine = new ISpaceMarine*[1];
		this->_spaceMarine[0] = spaceMar;
		this->_nbrSquad = 1;
	}
	return (this->_nbrSquad);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */