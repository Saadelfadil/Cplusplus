/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 10:11:22 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/22 15:14:05 by sel-fadi         ###   ########.fr       */
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
  
  std::cout << "Makes some drilling noises\n";
  if (rand() % 100 < 50)
      std::cout << this->_Target << " has been robotomized successfully\n";
  else
      std::cout << this->_Target << "Faillure\n";
}


/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::ostream	&operator<<(std::ostream & out, const RobotomyRequestForm &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getInde() << " grade to sign : "<< obj.getGradeSign() << ", grade to exec : " << obj.getGradeExec() << std::endl;
	return (out);
}