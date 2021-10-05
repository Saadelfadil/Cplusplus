/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/10/05 14:09:53 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <string>
#include <cctype>
# include <algorithm>
#  include <vector>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> _array;
    public:
        Span(unsigned int n);
        Span(Span const &obj);
        Span & operator = (Span const &obj);
        ~Span();

        void addNumber(unsigned int n);
        int shortestSpan();
        int longestSpan();
        void addNumberRandom(unsigned int n);
        
        class vectorFull : public std::exception
		{
			public:
				const char *what() const throw();
		};
        class vectorEmpty : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif