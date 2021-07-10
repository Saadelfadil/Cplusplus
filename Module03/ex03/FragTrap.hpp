/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 14:21:42 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/10 17:21:30 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include  "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public :
        FragTrap(FragTrap const &Frag);
        FragTrap & operator = (FragTrap const &Frag);
        FragTrap(std::string name);
        FragTrap();
        ~FragTrap();
        void highFivesGuys(void);
};