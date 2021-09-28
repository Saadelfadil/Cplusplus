/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:38 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/28 14:58:29 by sel-fadi         ###   ########.fr       */
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
    
}

int main()
{
    // Base *curr = generate();
}