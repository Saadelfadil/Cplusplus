/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:14:06 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/27 15:03:06 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Scalar::Scalar(std::string value)
{
    if (!std::isdigit(value[0]) && value.length() == 1)
    {
        int c = value[0];
        value = std::to_string(c);
    }
    this->_value = value;
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
	try
	{
		char c = std::stoi(this->_value);
		if (std::isprint(c))
		    std::cout << "char: '" << c << "'"<< std::endl;
		else
            throw Scalar::noDisplay();
		return c;
	}
    catch (const noDisplay &e)
    {
        std::cerr << e.what();
    }
	catch(const std::exception& e)
	{
		std::cout<< "char: impossible" << '\n';
	}
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
        double i = std::stod(this->_value);
        if (i != (int)i)
			std::cout << "double: " << i << "\n";
		else
			std::cout << "double: " << i << ".0\n";
        return i;
    }
    catch(const std::exception& e)
    {
        std::cout<< "double: impossible" << '\n';
    }
    return 0;
}

void Scalar::printValues()
{
    char charValue = static_cast<char>(*this);
    int intValue = static_cast<int>(*this);
    float floatValue = static_cast<float>(*this);
    double doubleValue = static_cast<double>(*this);
    (void)charValue, (void)intValue, (void)doubleValue, (void)floatValue;
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
