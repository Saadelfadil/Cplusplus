/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/10 17:21:36 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public :
        ScavTrap(ScavTrap const &Clap);
        ScavTrap & operator = (ScavTrap const &Clap);
        ScavTrap(std::string name);
        ScavTrap();
        ~ScavTrap();
        void guardGate();
};

#endif