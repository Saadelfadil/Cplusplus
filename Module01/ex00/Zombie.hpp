/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/03 11:35:48 by sel-fadi         ###   ########.fr       */
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