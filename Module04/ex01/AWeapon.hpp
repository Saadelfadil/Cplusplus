/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/11 20:58:56 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>

class AWeapon
{
	protected:
		std::string _name;
		int			_apcost;
		int			_damage;
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		~AWeapon();
		AWeapon();
		AWeapon::AWeapon(const AWeapon & src);
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		void attack() const = 0;
};


#endif /* ******************************************************** SORCERER_H */