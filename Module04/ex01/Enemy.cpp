/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:55:09 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/12 13:15:47 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
	
}

Enemy::Enemy( const Enemy & src )
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
	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

// std::string Enemy::getName() const
// {
// 	return (this->_name);
// }

// int Enemy::getAPCost() const
// {
// 	return (this->_apcost);
// }

void Enemy::takeDamage(int damage)
{
	if (damage)
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */