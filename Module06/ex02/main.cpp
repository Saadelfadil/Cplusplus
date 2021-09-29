/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:38 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/28 18:45:17 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
    srand(time(NULL));
    
	int	randValue = rand() % 3;
    if (randValue == 1)
    {
        A *childA = new A();
        Base *baseA = dynamic_cast<Base *>(childA);
        return (baseA);
    }
    else if (randValue == 2)
    {
        B *childB = new B();
        Base *baseB = dynamic_cast<Base *>(childB);
        return (baseB);    
    }
    else
    {
        C *childC = new C();
        Base *baseC = dynamic_cast<Base *>(childC);
        return (baseC);
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "C\n";
    else
		;
}


void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << "A\n";
        (void)a;
    }
    catch(const std::exception& e)
    {
        try
        {
            B &b = dynamic_cast<B&>(p);
            std::cout << "B\n";
            (void)b;
        }
        catch(const std::exception& e)
        {
            try
            {
                C &c = dynamic_cast<C&>(p);
                std::cout << "C\n";
                (void)c;
            }
            catch(const std::exception& e)
            {
            }
        }
    }
    
}

int main()
{
    Base *curr = generate();
    identify(*curr);
}