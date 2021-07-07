/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/07 11:23:09 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADERR_H
# define MY_HEADERR_H
# include <iostream>

class Fixed {
    private :
        int fixedPoint;
        static int const numberOfFrac = 8;
    public :
        Fixed(const Fixed &fixedP);
        ~Fixed();
        Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed & operator = (Fixed const &fixedP);
};

#endif