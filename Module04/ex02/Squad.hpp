/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/14 13:41:52 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		int _nbrSquad;
		ISpaceMarine **_spaceMarine;
	public:
		Squad();
		~Squad();
		Squad(const Squad &src);
		virtual ~Squad();
		int getCount() const = 0;
		ISpaceMarine* getUnit(int nbrUnit) const = 0;
		int push(ISpaceMarine* spaceMar) = 0;
		Squad &	operator=(Squad const & rhs);
};


#endif /* ******************************************************** SQUAD_H */