/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/10/01 11:38:12 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <string>
#include <cctype>
# include <algorithm>

class Span
{
    private:
        unsigned int _N;
    public:
        Span(unsigned int n);
        void addNumber(unsigned int n);
        
        class alreadyStored : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif