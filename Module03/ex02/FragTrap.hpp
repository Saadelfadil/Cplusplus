/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 14:21:42 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/10 14:31:05 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include  "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap(FragTrap const &Clap);
        FragTrap & operator = (FragTrap const &Clap);
        FragTrap(std::string name);
        FragTrap();
        ~FragTrap();
        void highFivesGuys(void);
};