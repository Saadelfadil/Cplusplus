/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:14:06 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/25 09:41:46 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "Hello from the CONSTRUCTOR [ShrubberyCreationForm]" << std::endl;
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
	std::cout << "Hello form the DESTRUCTOR [ShrubberyCreationForm]" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm & ShrubberyCreationForm::operator = ( ShrubberyCreationForm const &obj)
{
		(void)(obj);
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
}

/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

