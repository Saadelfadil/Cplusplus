/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:14:06 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/02 18:43:54 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string name, bool inde, const int gradeSign, const int gradeExec) : _name(name), _inde(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    if (gradeSign < 1 || gradeExec < 1)
        throw Form::GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw Form::GradeTooLowException();;
}

Form::Form()
{
}

Form::Form(Form const &obj)
{
    if (obj.getGrade() < 1)
		throw Form::GradeTooHighException();
	else if (obj.getGrade() > 150)
		throw Form::GradeTooLowException();
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

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Problem is grade is under 1");
}

Form::GradeTooHighException::GradeTooHighException() throw()
{
    
}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &) throw()
{
    
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
    
}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(const GradeTooHighException &obj) throw() 
{
	if (this == &obj)
		return (*this);
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Problem is grade is up 150");
}

Form::GradeTooLowException::GradeTooLowException() throw()
{
    
}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &) throw()
{

}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
    
}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(const GradeTooLowException &obj) throw() 
{
	if (this == &obj)
		return (*this);
	return (*this);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::ostream	&operator<<(std::ostream & out, const Form &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (out);
}