/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:29:57 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/10/04 13:32:29 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int n) : _N(n)
{
    
}

Span::Span(Span const &obj)
{
    *this = obj;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span & Span::operator = (Span const &obj)
{
    if (this != &obj)
        this->_N = obj._N;
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(unsigned int n)
{
    if (this->_array.size() == this->_N)
        throw vectorFull();
    this->_array.push_back(n);
}

int Span::shortestSpan()
{
   	unsigned int shortOne;
	std::sort(this->_array.begin(), this->_array.end());
	for (size_t i = 1; i < this->_array.size(); i++)
	{
		unsigned int tmp = _array.at(i) - _array.at(i - 1);
		if (tmp < shortOne)
			shortOne = tmp;
	}
	return shortOne;
}

int Span::longestSpan()
{
   	unsigned int longestOne;
	std::sort(this->_array.begin(), this->_array.end());
	longestOne = _array.at(this->_N - 1) - _array.at(0);
	return longestOne;
}

// void Span::addNumberRandom(unsigned int n)
// {
// 	srand(time(NULL));
// 	unsigned int size = this->_array.size();
// 	for (unsigned int i = 0; i < n; i++)
// 	{
// 		if (size + i < this->_N)
// 			this->_array.push_back(rand());
// 		else
// 			throw vectorFull();
// 	}
// }

/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/

const char* Span::vectorFull::what() const throw()
{
    return "error : Vector is full.";
}

const char * Span::vectorEmpty::what() const throw()
{
	return "error : Empty vector or just 1 element.";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
// std::ostream &operator << (std::ostream& output, Span const &obj)
// {
//     output << (void)obj << std::endl;
// 	return (output);
// }
