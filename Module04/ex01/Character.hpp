/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/13 16:24:37 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string _name;
		int _ap;
		AWeapon *_curWeapon;
	public:
	Character(std::string const & name);
	~Character();
	Character();
	Character(const Character & src);
	
	void recoverAP();
	void equip(AWeapon* curWeapon);
	void attack(Enemy* enem);
	
	AWeapon *getWeapon(void) const;
	int Character::getAP(void) const;
	std::string const getName() const;
	
	Character &		Character::operator=(Character const & rhs);
};

std::ostream &operator<<(std::ostream &out, Character const &chara);


#endif /* ******************************************************** SORCERER_H */