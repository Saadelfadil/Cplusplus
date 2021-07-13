/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/13 17:55:08 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	protected:
		Enemy();
		int _hp;
		std::string _type;
	public:
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();
		Enemy(const Enemy & src);
		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int damage);
		Enemy &		operator=(Enemy const & rhs);
};


#endif /* ******************************************************** SORCERER_H */