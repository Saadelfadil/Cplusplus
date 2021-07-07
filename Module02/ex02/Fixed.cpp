/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:18 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/07 20:45:40 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const Fixed &fixedP)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixedP;
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPoint = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
    this->fixedPoint = raw;
}

Fixed & Fixed::operator = ( Fixed const &fixedP)
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixedPoint = fixedP.fixedPoint;
    return *this;
}

float Fixed::toFloat( void ) const
{
    return (float)fixedPoint / (1 << Fixed::numberOfFrac);
}

int Fixed::toInt( void ) const
{
    return fixedPoint / (1 << Fixed::numberOfFrac);
}

Fixed::Fixed(const int fixedP)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPoint = fixedP * (1 << Fixed::numberOfFrac);
}

Fixed::Fixed(const float fixedP)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPoint = roundf(fixedP * (1 << Fixed::numberOfFrac)); 
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

Fixed  Fixed::operator + (Fixed const &fixedP) const
{
    Fixed fixe;
    fixe.fixedPoint += fixedP.fixedPoint;
    return fixe;
}

Fixed  Fixed::operator - (Fixed const &fixedP) const
{
    Fixed fixe;
    fixe.fixedPoint -= fixedP.fixedPoint;
    return fixe;
}

Fixed  Fixed::operator * (Fixed const &fixedP) const
{
    Fixed fixe;
    fixe.fixedPoint *= fixedP.fixedPoint;
    return fixe;
}

Fixed  Fixed::operator / (Fixed const &fixedP)
{
    this->fixedPoint /= fixedP.fixedPoint;
}
