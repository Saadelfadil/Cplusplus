/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:14:06 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/26 16:34:29 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
        this->_value = obj->_value;
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Scalar::getValue() const
{
    return this->_value;
}

void Scalar::setValue(std::string value) const
{
    this->_value = value;
}

Scalar::operator char()
{
	try
	{
		if (!isdigit(s[0]) && (s.length() >= 3))
			std::cout << "char: impossible" << std::endl;
		else if (n > 32 && n < 127)
			std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	catch ()
	{
		
	}
}

Scalar::operator int()
{
	try
    {
        int i = std::stoi(this->_string);
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
        float i = std::stoi(this->_string);
        std::cout << "float: " << i << "\n";
        return i;
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
        double i = std::stoi(this->_string);
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



/*
** --------------------------------- ACCESSOR ---------------------------------
*/
