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
        throw alreadyStored();
    this->_array.push_back(n);

}

int Span::shortestSpan()
{
   	unsigned int ret;
	std::sort(this->_array.begin(), this->_array.end());
	for (size_t i = 1; i < this->_array.size(); i++)
	{
		unsigned int v = _array.at(i) - _array.at(i - 1);
		if (v < ret)
			ret = v;
	}
	return ret;
}

/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/

const char* Span::alreadyStored::what() const throw()
{
    return "error : N is Already Stored.";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
// std::ostream &operator << (std::ostream& output, Span const &obj)
// {
//     output << (void)obj << std::endl;
// 	return (output);
// }
