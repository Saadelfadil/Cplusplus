/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 11:37:15 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/03 11:37:24 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADERR_H
#define MY_HEADERR_H
#include <iostream>

class Zombie {
    private :
        std::string name;
    public :
        Zombie(std::string name);
        ~Zombie();
        void announce();
};
void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif