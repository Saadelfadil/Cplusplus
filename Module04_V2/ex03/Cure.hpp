/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/15 13:25:38 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Cure : public AMateria
{
	protected:
		std::string _type;
		std::string _name;
	public:
		Cure(std::string const &src);
		virtual ~Cure();
		Cure *clone(void) const;
		void use(ICharacter &target);
		Cure & operator=(Cure const & rhs);
};


#endif /* ******************************************************** CURE_H */