/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/30 18:01:43 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <string>
#include <cctype>
# include <algorithm>

class notFound : public std::exception
{
    public:
        const char *what() const throw()
        {
            return "Not Found.";
        }
};

template <typename T>
void easyfind(T container, int n)
{
    int *element = std::find(container.begin(), container.end(), n);
    if (element != container.end())
        std::cout << "Hola we found it : " << *element << std::endl;
    else
        throw notFound();
}

#endif