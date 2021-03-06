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

Form::Form() : _name(NULL), _gradeSign(0), _gradeExec(0)
{
	this->_inde = false;
	std::cout << "Hello form the Default CONSTRUCTOR" << std::endl;
}

Form::Form(const std::string name, const int gradeSign, const int gradeExec) : _name(name), _inde(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    if (gradeSign < 1 || gradeExec < 1)
        throw Form::GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw Form::GradeTooLowException();
}


Form::Form(Form const &obj) : _inde(false), _gradeSign(obj._gradeSign), _gradeExec(obj._gradeExec)
{
	*this = obj;
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
		this->_inde = obj._inde;
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const std::string Form::getName() const
{
	return (this->_name);
}

bool   Form::getInde() const
{
	return (this->_inde);
}

int Form::getGradeSign() const
{
	return (this->_gradeSign);
}

int Form::getGradeExec() const
{
	return (this->_gradeExec);
}

void Form::beSigned(Bureaucrat &bureau)
{
	if (bureau.getGrade() > this->_gradeSign)
        throw Form::GradeTooLowException();
	else
		this->_inde = true;
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
	out << obj.getName() << ", bureaucrat grade " << obj.getInde() << " grade to sign : "<< obj.getGradeSign() << ", grade to exec : " << obj.getGradeExec() << std::endl;
	return (out);
}