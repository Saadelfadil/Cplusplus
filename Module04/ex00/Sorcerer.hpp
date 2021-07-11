/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/11 15:30:41 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
	private:
		std::string _name;
		std::string _title;
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer( Sorcerer const & src );
		~Sorcerer();
		Sorcerer &	operator=( Sorcerer const & rhs );
		void		whoIamI(void);
		std::string get_name(void) const;
		std::string get_title(void) const;
		void		polymorph(Victim const &obj) const;
};

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i );

#endif /* ******************************************************** SORCERER_H */