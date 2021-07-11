/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/10 20:11:16 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap {
    private :
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public :
        ClapTrap(std::string name);
        ClapTrap();
        ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
        ClapTrap(ClapTrap const &Clap);
        ClapTrap & operator = (ClapTrap const &Clap);
        virtual ~ClapTrap();
        virtual void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif