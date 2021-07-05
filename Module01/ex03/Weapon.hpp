/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:50:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/05 12:50:17 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon {
    private :
        std::string type;
    public :
        Weapon(std::string type);
        Weapon();
        const std::string &getType() const;
        void setType(std::string type);
};