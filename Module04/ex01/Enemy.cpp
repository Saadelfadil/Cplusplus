/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/12 18:21:26 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
	
}

Enemy::Enemy(const Enemy & src)
{
	
}

Enemy::Enemy()
{
	
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Enemy::~Enemy()
{
	
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Enemy &		Enemy::operator=(Enemy const & rhs)
{
	this->_hp = rhs._hp;
	this->_type = rhs._type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Enemy::getType() const
{
	return (this->_type);
}

int Enemy::getHP() const
{
	return (this->_hp);
}

void Enemy::takeDamage(int damage)
{
	if (damage > 0 && this->_hp > 0)
		this->_hp -= damage;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */