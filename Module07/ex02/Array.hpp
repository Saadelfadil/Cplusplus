/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/30 12:53:17 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_H
# define Array_H

# include <iostream>
# include <string>
#include <cctype>

template <class A>

class Array
{
	private:
		A *_array;
		int _n;
	public:
		Array( void )
		{
			this->_array = new A[0];
			this->_n = 0;
		};

		Array(unsigned int n)
		{
			this->_array = new A[n]();
			this->_n = n;
		};

		Array(Array<A> const &cpy)
		{
			this->_array = new A[0];
			*this = cpy;
		};

		~Array()
		{
			if (this->_array != NULL)
				delete [] this->_array;
		};

		Array &operator = (Array<A> const &obj)
		{
			if (this != &obj)
			{
				if (this->_array != NULL)
					delete [] this->_array;
				this->_array = new A[obj._n];
				this->_n = obj._n;
				for (int i = 0; i < this->_n; i++)
					this->_array[i] = obj._array[i];
			}
			return *this;
		};

		A	&operator[](int idx)
		{
			if ((idx < this->_n) && (idx >= 0))
				return this->_array[idx];
			else
				throw outOfLimits();
		};
		
		unsigned int size()
		{
			return (this->_n);
		};

		A getArray() const
		{
			return (this->_array);
		};
		
		unsigned int	getN() const
		{ 
			return (this->_n);
		};

		class outOfLimits : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Out of limits.";
				}
		};
};

#endif