/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/29 10:15:34 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Whatever_H
# define Whatever_H

# include <iostream>
# include <string>
#include <cctype>

template <typename S>
void swap(S &str1, S &str2)
{
    S temp = str1;
    str1 = str2;
    str2 = temp;
}

template <typename M>
M min(M str1, M str2)
{
    if (str1 < str2)
        return str1;
    else
        return str2;
}

template <typename X>
X max(X str1, X str2)
{
    if (str1 > str2)
        return str1;
    else
        return str2;
}

#endif