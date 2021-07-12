/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/12 13:13:24 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>

class Enemy
{
	protected:
		int _hp;
		std::string _type;
	public:
		Enemy(int hp, std::string const & type);
		~Enemy();
		Enemy();
		Enemy::Enemy(const Enemy & src);
		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int damage);
};


#endif /* ******************************************************** SORCERER_H */