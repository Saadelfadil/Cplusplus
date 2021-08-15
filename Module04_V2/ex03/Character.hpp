/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/15 15:26:27 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character
{
	private:
		Character();
	protected:
		std::string _type;
		unsigned int _xp;
	public:
		Character(std::string const &src);
		virtual ~Character();

		std::string const &getType(void) const;
		unsigned int getXP(void) const;

		virtual Character *clone(void) const = 0;
		virtual void use(ICharacter &target);
		Character & operator=(Character const & rhs);
};


#endif /* ******************************************************** CHARACTER_H */