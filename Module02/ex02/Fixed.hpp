 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/07 19:38:52 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADERR_H
# define MY_HEADERR_H
# include <iostream>
# include <cmath>

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
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        static const Fixed &min(const Fixed &fixedP1, const Fixed &fixedP2);
        static const Fixed &max(const Fixed &fixedP1, const Fixed &fixedP2);

        Fixed & operator = (Fixed const &fixedP);

        bool operator > (Fixed const &fixedP) const;
        bool operator < (Fixed const &fixedP) const;
        bool operator >= (Fixed const &fixedP) const;
        bool operator <= (Fixed const &fixedP) const;
        bool operator == (Fixed const &fixedP) const;
        bool operator != (Fixed const &fixedP) const;

        Fixed operator + (Fixed const &fixedP) const;
        Fixed operator - (Fixed const &fixedP) const;
        Fixed operator * (Fixed const &fixedP) const;
        Fixed operator / (Fixed const &fixedP) const;

        Fixed & operator ++ (void);
        Fixed operator ++ (int);
        Fixed & operator -- (void);
        Fixed operator -- (int);
};

std::ostream &operator << (std::ostream& output, Fixed const &obj);

#endif