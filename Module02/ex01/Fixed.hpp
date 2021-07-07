/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/07 11:38:50 by sel-fadi         ###   ########.fr       */
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
        Fixed(const int fixedP);
        Fixed(const float fixedP);
        Fixed(const Fixed &fixedP);
        ~Fixed();
        Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed & operator = (Fixed const &fixedP);
        Fixed & operator << (Fixed const &fixedP);
};

#endif