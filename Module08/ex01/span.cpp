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
    for (unsigned int i = 0; i < this->_array.size(); i++)
    {
        if (i == this->_N)
            throw Span::alreadyStored();
        else
            this->_array.push_back(n);
    }
}

int Span::shortestSpan()
{
    // int tmp;
    // sort(this->_array, this->_N);
    // for (unsigned int i; i < this->_array.size(); i++)
    // {
    //     tmp = this->_array[++i] - this->_array[i];
    //     if (tmp < (this->_array[++i] - this->_array[i]))
    //         tmp = this->_array[++i] - this->_array[i];
    //     return tmp;
    // }
    int tmp;
    sort(this->_array, this->_N);
    for (auto i = this->_array.begin(
        
    ); i < this->_array.size(); i++)
    {
        std::cout << this->_array
    }

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
