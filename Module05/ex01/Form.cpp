/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:14:06 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/02 12:26:46 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string name, int grade) : _name(name), _inde(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();;
}

Form::Form()
{
}

Form::Form(Form const &obj)
{
    if (obj.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (obj.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form & Form::operator = ( Form const &obj)
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

const std::string Form::getName() const
{
	return (this->_name);
}

int Form::getGrade() const
{
	return (this->_grade);
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

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &) throw()
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

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &) throw()
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

std::ostream	&operator<<(std::ostream & out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (out);
}