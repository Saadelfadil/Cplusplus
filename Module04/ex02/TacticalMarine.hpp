/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:13:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/14 16:33:37 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	private:
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine &src);
		virtual ~TacticalMarine();
		TacticalMarine* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
		TacticalMarine &	operator=(TacticalMarine const & rhs);
};


#endif /* ******************************************************** TACTICALMARINE_H */