/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/28 11:55:01 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <time.h>

class Base
{
	public:
	    virtual ~Base() {}
};

class A : public Base
{
	public:
		A() {}
		virtual ~A() {}
};

class B : public Base
{
	public:
		B() {}
		virtual ~B() {}
};

class C : public Base
{
	public:
		C() {}
		virtual ~C() {}
};