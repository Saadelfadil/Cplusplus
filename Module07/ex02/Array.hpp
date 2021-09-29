/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/29 16:50:48 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_H
# define Array_H

# include <iostream>
# include <string>
#include <cctype>

template <typename S>
void printElement(S &element)
{
    std::cout << element << std::endl;
}

template <typename S>
void iter(S *array, int size, void (*eachElement)(S &element))
{
    for (int i = 0; i < size; i++)
        eachElement(array[i]);
}

#endif