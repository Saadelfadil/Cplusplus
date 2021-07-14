/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/14 17:05:13 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"

struct mylist {
	ISpaceMarine *marine;
	struct mylist *next;	
};

class Squad : public ISquad
{
	private:
		int _nbrSquad;
		mylist *_spaceMarine;
	public:
		Squad();
		Squad(const Squad &src);
		virtual ~Squad();
		int getCount() const;
		ISpaceMarine* getUnit(int nbrUnit) const;
		int push(ISpaceMarine* spaceMar);
		Squad &	operator=(Squad const & rhs);
};


#endif /* ******************************************************** SQUAD_H */