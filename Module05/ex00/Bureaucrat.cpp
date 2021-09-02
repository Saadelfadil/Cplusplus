/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:14:06 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/02 11:35:28 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();;
}

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
    if (obj.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (obj.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat & Bureaucrat::operator = ( Bureaucrat const &obj)
{
    if (this != &obj)
    {
        this->_grade = obj._grade;
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade - 1 < 0)
        throw Bureaucrat::GradeTooHighException();
    else
	    this->_grade -= 1;
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade + 1 < 0)
        throw Bureaucrat::GradeTooLowException();
	else
        this->_grade += 1;
}

/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Problem is grade is under 1");
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw()
{
    
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &obj) throw()
{
    
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
    
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException &obj) throw() 
{
	if (this == &obj)
		return (*this);
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Problem is grade is up 150");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw()
{
    
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &obj) throw()
{

}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
    
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException &obj) throw() 
{
	if (this == &obj)
		return (*this);
	return (*this);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/