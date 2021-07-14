/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/14 20:07:38 by sel-fadi         ###   ########.fr       */
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
	this->_nbrSquad = 0;
	for (int i = 0; i < src.getCount(); i++)
		this->push(src.getUnit(i)->clone());
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	mylist *tmp;
	if (this->_spaceMarine)
	{
		for (int i = 0; i < _nbrSquad; i++)
		{
			delete this->_spaceMarine->marine;
			tmp = _spaceMarine->next;
			delete _spaceMarine;
			_spaceMarine = tmp;
		}
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &		Squad::operator=(Squad const & rhs)
{
	mylist *tmp;
	if (this->_spaceMarine)
	{
		for (int i = 0; i < _nbrSquad; i++)
		{
			delete this->_spaceMarine->marine;
			tmp = _spaceMarine->next;
			delete _spaceMarine;
			_spaceMarine = tmp;
		}
	}
	this->_nbrSquad = 0;
	for (int i = 0; i < rhs.getCount(); i++)
		this->push(rhs.getUnit(i)->clone());
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
	mylist *new_marine;
	if (!spaceMar)
		return (_nbrSquad);
	if (_nbrSquad == 0)
	{
		_spaceMarine = new mylist;
		_spaceMarine->marine = spaceMar;
		_spaceMarine->next = NULL;
		_nbrSquad++;
	}
	for (int i = 0; i < this->_nbrSquad; i++)
		if (this->_spaceMarine->marine == spaceMar)
			return (this->_nbrSquad);
	for (int i = 0; i < (_nbrSquad - 1); i++)
		tmp = tmp->next;
	new_marine = new mylist;
	new_marine->marine = spaceMar;
	new_marine->next = NULL; 
	tmp->next = new_marine;
	_nbrSquad++;
	return(_nbrSquad);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */