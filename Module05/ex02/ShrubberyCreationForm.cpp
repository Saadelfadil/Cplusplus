/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:14:06 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/23 10:12:42 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
{
	*this = obj;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm & ShrubberyCreationForm::operator = ( ShrubberyCreationForm const &obj)
{
    if (this != &obj)
		this->_target = obj._target;
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string ShrubberyCreationForm::getTarget() const
{
    return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeExec())
		throw Form::GradeTooLowException();
	else if (this->getInde() == false)
		throw Form::FormNotSigned();
	else
	{
        std::ofstream ofs(this->getTarget() + "_shrubbery");
        ofs << "                                                .\n";
        ofs << "                                     .         ;  \n";
        ofs << "        .              .              ;%     ;;   \n";
        ofs << "          ,           ,                :;%  %;   \n";
        ofs << "           :         ;                   :;%;'     .,   \n";
        ofs << "  ,.        %;     %;            ;        %;'    ,;\n";
        ofs << "    ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
        ofs << "     %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
        ofs << "      ;%;      %;        ;%;        % ;%;  ,%;'\n";
        ofs << "       `%;.     ;%;     %;'         `;%%;.%;'\n";
        ofs << "        `:;%.    ;%%. %@;        %; ;@%;%'\n";
        ofs << "           `:%;.  :;bd%;          %;@%;'\n";
        ofs << "             `@%:.  :;%.         ;@@%;'   \n";
        ofs << "               `@%.  `;@%.      ;@@%;         \n";
        ofs << "                 `@%%. `@%%    ;@@%;        \n";
        ofs << "                   ;@%. :@%%  %@@%;       \n";
        ofs << "                     %@bd%%%bd%%:;     \n";
        ofs << "                       #@%%%%%:;;\n";
        ofs << "                       %@@%%%::;\n";
        ofs << "                       %@@@%(o);  . '         \n";
        ofs << "                       %@@@o%;:(.,'         \n";
        ofs << "                   `.. %@@@o%::;         \n";
        ofs << "                      `)@@@o%::;         \n";
        ofs << "                       %@@(o)::;        \n";
        ofs << "                      .%@@@@%::;         \n";
        ofs << "                      ;%@@@@%::;.          \n";
        ofs << "                     ;%@@@@%%:;;;. \n";
        ofs << "                 ...;%@@@@@%%:;;;;,..    Saad El fadil\n";
        ofs.close();
}


/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

