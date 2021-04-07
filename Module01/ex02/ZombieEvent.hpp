/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:07:47 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/04/04 12:50:22 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADER_H
#define MY_HEADER_H
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {
    public :
        std::string type;
        ZombieEvent(std::string type);
        ~ZombieEvent();
    public :
        void setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        void randomChump();
};

#endif