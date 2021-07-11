/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wac.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/11 17:39:57 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WAC_HPP
# define WAC_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Wac : public Victim
{
	public:
		Wac();
		Wac(std::string name);
		Wac(Wac const &src);
		~Wac();
		Wac &	operator=(Wac const & rhs);
		void	getPolymorphed() const;
};

std::ostream &		operator<<( std::ostream & o, Wac const & i );

#endif /* ******************************************************** SORCERER_H */