/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 20:34:22 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/03 21:14:35 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
    
}

Karen::~Karen()
{
    
}

void Karen::complain(std::string level)
{
    Mykaren list[4] = {
        &Karen::debug,
        &Karen::info,
        &Karen::warning,
        &Karen::error
    };

    std::string arg[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    for (int i = 0; i < 4; i++)
    {
        if (arg[i] == level)
            (this->*list[i])();
    }
}

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << "\n";
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << "\n";
}

void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << "\n";
}

void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << "\n";
}