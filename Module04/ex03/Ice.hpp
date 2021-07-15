/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/15 13:09:24 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Ice : public AMateria
{
	protected:
		std::string _type;
		std::string _name;
	public:
		Ice(std::string const &src);
		virtual ~Ice();
		Ice *clone(void) const;
		void use(ICharacter &target);
		Ice & operator=(Ice const & rhs);
};


#endif /* ******************************************************** Ice_H */