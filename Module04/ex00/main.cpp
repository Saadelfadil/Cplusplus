/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:36:40 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/11 15:36:23 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

int main(void)
{
    Sorcerer so("Saad", "Pro");
    Victim vi("Achraf");
    // so.get_name();
    // so.get_title();
    so.whoIamI();
    so.polymorph(vi);
    
    vi.getPolymorphed();
    vi.whoIamI();
}