/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/11 15:25:49 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	private:
		std::string _name;
	public:

		Victim(std::string name);
		Victim(Victim const & src );
		~Victim();
		Victim &	operator=( Victim const & rhs );
		void		whoIamI(void);
		std::string get_name(void) const;
		void		getPolymorphed() const;
};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif /* ******************************************************** SORCERER_H */