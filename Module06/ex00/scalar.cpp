/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:14:06 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/27 10:01:36 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Scalar::Scalar(std::string value) : _value(value)
{
}

Scalar::Scalar()
{
}

Scalar::Scalar(Scalar const &obj)
{
    *this = obj;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Scalar::~Scalar()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Scalar & Scalar::operator = (Scalar const &obj)
{
    if (this != &obj)
        this->_value = obj._value;
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Scalar::getValue() const
{
    return this->_value;
}

void Scalar::setValue(std::string value)
{
    this->_value = value;
}

Scalar::operator char()
{
    int i = std::stoi(this->_value);
    if (std::isprint(i))
        std::cout << "char: '" << static_cast<char>(i) << "'\n";
    else
        throw Scalar::noDisplay();
    return 0;
}

Scalar::operator int()
{
	try
    {
        int i = std::stoi(this->_value);
        std::cout << "int: " << i << "\n";
        return i;
    }
    catch(const std::exception& e)
    {
        std::cout<< "int: impossible" << '\n';
    }
    return 0;
}

Scalar::operator float()
{
	try
    {
        float f = std::stof(this->_value);
		if (f != (int)f)
			std::cout << "float: " << f << "f" << std::endl;
		else
			std::cout << "float: " << f << ".0f" << std::endl;
        return f;
    }
    catch(const std::exception& e)
    {
        std::cout<< "float: impossible" << '\n';
    }
    return 0;
}

Scalar::operator double()
{
	try
    {
        double i = std::stoi(this->_value);
        std::cout << "double: " << i << "\n";
        return i;
    }
    catch(const std::exception& e)
    {
        std::cout<< "double: impossible" << '\n';
    }
    return 0;
}

void Scalar::printValues(Scalar const &scal)
{
    // void static_cast<char>(scal);
    // void static_cast<int>(scal);
    // void static_cast<float>(scal);
    // void static_cast<double>(scal);
}

/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/

const char* Scalar::noDisplay::what() const throw()
{
    return ("char: Non displayable\n");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
