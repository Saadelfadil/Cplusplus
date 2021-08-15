/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria copy.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/15 13:09:52 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	private:
		AMateria();
	protected:
		std::string _type;
		unsigned int _xp;
	public:
		AMateria(std::string const &src);
		virtual ~AMateria();

		std::string const &getType(void) const;
		unsigned int getXP(void) const;

		virtual AMateria *clone(void) const = 0;
		virtual void use(ICharacter &target);
		AMateria & operator=(AMateria const & rhs);
};


#endif /* ******************************************************** AMATERIA_H */