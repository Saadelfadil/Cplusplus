/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:38:54 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/04/02 15:38:55 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string toUppercase(std::string str) {
    size_t i = 0;
    while (i < str.length()) {
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
            i++;
        }
        else
            i++;
    }
    return str;
}

int main(int argc, char *argv[]) {
    if (argc > 1)
    {
        int i = 1;
        while (i < argc)
        {
            std::cout << toUppercase(argv[i]);
            i++;
        }
        std::cout << "\n";
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
    }
}