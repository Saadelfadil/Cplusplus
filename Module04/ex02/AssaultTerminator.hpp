/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/14 17:09:48 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	private:
		AssaultTerminator *assaultT;
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &src);
		virtual ~AssaultTerminator();
		AssaultTerminator* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
		AssaultTerminator &	operator=(AssaultTerminator const & rhs);
};


#endif /* ******************************************************** ASSAULTTERMINATOR_H */