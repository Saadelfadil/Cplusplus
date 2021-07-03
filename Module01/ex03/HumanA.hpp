/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:15:45 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/03 14:15:46 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon &Human_A;
    public :
        HumanA(std::string name, Weapon &Human_A);
        void attack();
};