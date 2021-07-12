/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/12 18:55:09 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class Character
{
	protected:
		std::string _name;
		int _ap;
		AWeapon *_curWeapon;
	public:
	Character(std::string const & name);
	Character(int type);
	Character(std::string const & name, int type);
	~Character();
	Character(const Character & src);
	void recoverAP();
	void equip(AWeapon* curWeapon);
	void attack(Enemy* enem);
	std::string getName() const;
	Character &		Character::operator=(Character const & rhs);
};


#endif /* ******************************************************** SORCERER_H */