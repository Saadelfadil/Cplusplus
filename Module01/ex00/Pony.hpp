/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 11:48:50 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/04/04 11:58:46 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADER_H
#define MY_HEADER_H
#include <iostream>

class Pony {
    public :
        std::string name;
        int age;
        Pony(std::string name, int age);
        ~Pony();
};

#endif