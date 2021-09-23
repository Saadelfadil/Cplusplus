/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 10:11:22 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/23 10:12:36 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}


RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
{
	*this = obj;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm & RobotomyRequestForm::operator = ( RobotomyRequestForm const &obj)
{
    if (this != &obj)
		this->_target = obj._target;
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string RobotomyRequestForm::getTarget() const
{
    return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeExec())
		throw Form::GradeTooLowException();
	else if (this->getInde() == false)
		throw Form::FormNotSigned();
    else {
        std::cout << "Makes some drilling noises\n";
        if (rand() % 2 == 1)
            std::cout << this->getTarget() << " has been robotomized successfully\n";
        else
            std::cout << this->getTarget() << "Faillure\n";
    }
}


/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/



/*
** --------------------------------- ACCESSOR ---------------------------------
*/
