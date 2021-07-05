/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 20:34:22 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/05 13:58:08 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
    
}

Karen::~Karen()
{
    
}

int resolveOption(std::string input)
{
    if ( input == "DEBUG" )
        return DEBUG;
    if ( input == "INFO" )
        return INFO;
    if ( input == "WARNING" )
        return WARNING;
    if ( input == "ERROR" )
        return ERROR;
    return INVALID;
}

void Karen::complain(std::string level)
{
    Mykaren list[4] = {
        &Karen::debug,
        &Karen::info,
        &Karen::warning,
        &Karen::error
    };

    switch (resolveOption(level)) {
        case DEBUG:
            (this->*list[0])();
            (this->*list[1])();
            (this->*list[2])();
            (this->*list[3])();
            break;
        case INFO:
            (this->*list[1])();
            (this->*list[2])();
            (this->*list[3])();
            break;
        case WARNING:
            (this->*list[2])();
            (this->*list[3])();
            break;
        case ERROR:
            (this->*list[3])();
             break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break;
    }
}

void Karen::debug(void)
{
    std::cout << "[ DEBUG ]" << "\n";
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << "\n";
}

void Karen::info(void)
{
    std::cout << "[ INFO ]" << "\n";
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << "\n";
}

void Karen::warning(void)
{
    std::cout << "[ WARNING ]" << "\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << "\n";
}

void Karen::error(void)
{
    std::cout << "[ ERROR ]" << "\n";
    std::cout << "This is unacceptable, I want to speak to the manager now." << "\n";
}