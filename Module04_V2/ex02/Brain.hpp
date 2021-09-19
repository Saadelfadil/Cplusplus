/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadmin <mcadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/08/12 18:28:04 by mcadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
# define Brain_HPP

# include <iostream>
# include <string>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain const &src);
		virtual ~Brain();
		std::string getIdea( int i ) const;
		void setIdea( int i, std::string idea );
		Brain &	operator=(Brain const & rhs);
};

std::ostream &		operator<<( std::ostream & o, Brain const & i );

#endif /* ******************************************************** Brain_H */