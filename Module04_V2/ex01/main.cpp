/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:36:40 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/03 16:32:17 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
    
    // const Animal *ani[4];
  
    // for(int i=0; i<2; i++)
    // {
    //     ani[i] = new Cat();
    // }
    // for(int i=2; i<4; i++)
    // {
    //     ani[i] = new Dog();
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     delete ani[i];
    // }
    
    // Cat cat;
    // cat.setIdea(0, "Cat idea");
    // std::cout << cat.getIdea(0) << "\n";
    // Cat cat2 = cat;
    // std::cout << cat2.getIdea(0) << "\n";

    Dog basic;
    basic.setIdea(1, "Dog idea");
    std::cout << basic.getIdea(1) << "\n";
    Dog tmp = basic;
    std::cout << tmp.getIdea(1) << "\n";

}
