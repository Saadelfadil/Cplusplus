/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/10/05 20:49:27 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef mutantstack_H
# define mutantstack_H

# include <iostream>
# include <string>
# include  <stack>
# include <iterator>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(){}
        ~MutantStack(){}
        MutantStack(MutantStack<T> const &obj)
        {
            (void)obj;
            *this = obj;
        }
        MutantStack & operator = (MutantStack<T> const &obj)
        {
            (void)obj;
            return *this;
        }
		typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return  this->c.begin();
        }
        iterator end()
        {
            return  this->c.end();
        }
};

#endif