/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 11:48:57 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/04/04 12:04:23 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack()
{
    std::cout << "--- Stack ---" << std::endl;
    Pony p1 = Pony("yolka", 4);
    std::cout << "Pony Born !" << std::endl;
}

void ponyOnTheHeap()
{
    std::cout << "--- Heap ---" << std::endl;
    Pony *p2 = new Pony("panto", 2);
    std::cout << "Pony Born !" << std::endl;
    delete p2;
}

int main()
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}