/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:06:17 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/05 13:06:18 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "the address in memory of string --> " << &str << std::endl;
    std::cout << "the address in memory of stringPTR --> " << stringPTR << std::endl;
    std::cout << "the address in memory of stringREF --> " << &stringREF << std::endl;
    
    std::cout << "the string using the pointer     --> " << *stringPTR << std::endl;
    std::cout << "the string using the reference   --> " << stringREF << std::endl;
    return (0);
}
