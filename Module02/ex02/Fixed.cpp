/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:18 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/08 12:26:39 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const Fixed &fixedP)
{
    std::cout << fixedP.getRawBits() << std::endl;
    *this = fixedP;
}

Fixed::Fixed()
{
    this->fixedPoint = 0;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
    return this->fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
    this->fixedPoint = raw;
}

Fixed & Fixed::operator = ( Fixed const &fixedP)
{
    this->fixedPoint = fixedP.fixedPoint;
    return *this;
}

float Fixed::toFloat( void ) const
{
    return (float)fixedPoint / (float)(1 << Fixed::numberOfFrac);
}

int Fixed::toInt( void ) const
{
    return fixedPoint / (1 << Fixed::numberOfFrac);
}

Fixed::Fixed(const int fixedP)
{
    this->fixedPoint = fixedP * (1 << Fixed::numberOfFrac);
    std::cout << "hello\n";
}

Fixed::Fixed(const float fixedP)
{
    this->fixedPoint = roundf(fixedP * (1 << Fixed::numberOfFrac));
    std::cout << "hello\n";
}

std::ostream & operator << (std::ostream& output, Fixed const &obj)
{
    output << obj.toFloat();
    return output;
}

//------- comparison operators -------//

bool Fixed::operator > ( Fixed const &fixedP) const
{
    if (fixedPoint > fixedP.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator < ( Fixed const &fixedP) const
{
    if (fixedPoint < fixedP.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator >= ( Fixed const &fixedP) const
{
    if (fixedPoint >= fixedP.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator <= ( Fixed const &fixedP) const
{
    if (fixedPoint <= fixedP.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator == ( Fixed const &fixedP) const
{
    if (fixedPoint == fixedP.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator != ( Fixed const &fixedP) const
{
    if (fixedPoint != fixedP.getRawBits())
        return 1;
    return 0;
}

//------- arithmetic operators -------//

Fixed  Fixed::operator + (Fixed const &fixedP)
{
    this->fixedPoint += fixedP.fixedPoint;
    return Fixed(this->fixedPoint);
}

Fixed  Fixed::operator - (Fixed const &fixedP)
{
    this->fixedPoint -= fixedP.fixedPoint;
    return Fixed(this->fixedPoint);
}

Fixed  Fixed::operator * (Fixed const &fixedP)
{
    // std::cout << this->fixedPoint << " " << fixedP.fixedPoint << std::endl;
    this->fixedPoint *= fixedP.fixedPoint;
    return Fixed(this->fixedPoint);
}

Fixed  Fixed::operator / (Fixed const &fixedP)
{
    this->fixedPoint /= fixedP.fixedPoint;
    return Fixed(this->fixedPoint);
}

//------- Min && Max functions -------//

Fixed const &Fixed::min(const Fixed &fixedP1, const Fixed &fixedP2)
{
    if (fixedP1 < fixedP2)
        return fixedP1;
    else
        return fixedP2;
}

Fixed const &Fixed::max(const Fixed &fixedP1, const Fixed &fixedP2)
{
    if (fixedP1 > fixedP2)
        return fixedP1;
    else
        return fixedP2;
}

//------- (pre-incr, post-incr) && (pre-decr, post-decr) -------//

Fixed & Fixed::operator ++ (void)
{
    this->fixedPoint++;
    return (*this);
}

Fixed Fixed::operator ++ (int)
{
    ++fixedPoint;
    return (*this);
    // ++this->fixedPoint;
    // return this->fixedPoint;
}

Fixed & Fixed::operator -- (void)
{
    this->fixedPoint--;
    return (*this);
}

Fixed Fixed::operator -- (int)
{
    --fixedPoint;
    return (*this);
}