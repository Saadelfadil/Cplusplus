/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 20:36:04 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/03 20:36:05 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

class HumanB {
    private :
        Weapon *Human_B;
        std::string name;
    public :
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon &Human_B);
};