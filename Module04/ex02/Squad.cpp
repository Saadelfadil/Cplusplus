/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/14 15:24:31 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad() : _nbrSquad(0), _spaceMarine(0)
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
		return (0);
	mylist *tmp = _spaceMarine;
	for (int i = 0; i < nbrUnit; i++)
	{
		tmp = tmp->next;
	}
	return (tmp->marine);
}

int Squad::push(ISpaceMarine* spaceMar)
{
	mylist *tmp = _spaceMarine;
	if (!spaceMar)
		return (_nbrSquad);
	for (int i = 0; i < this->_nbrSquad; i++)
		if (this->_spaceMarine->marine == spaceMar)
			return (this->_nbrSquad);
	for (int i = 0; i < _nbrSquad; i++)
	{
		tmp = tmp->next;
	}
	tmp->next->marine = spaceMar;
	tmp->next->next = NULL;
	_nbrSquad++;
	return(_nbrSquad);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */