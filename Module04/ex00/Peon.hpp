/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/11 16:40:59 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon();
		Peon(std::string name);
		Peon(Peon const &src);
		~Peon();
		Peon &	operator=(Peon const & rhs);
		void		getPolymorphed() const;
};

std::ostream &		operator<<( std::ostream & o, Peon const & i );

#endif /* ******************************************************** SORCERER_H */