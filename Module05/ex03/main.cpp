/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:38 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/25 11:08:58 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat buo("HICHAM", 3);
        PresidentialPardonForm sh_form("ZAAK");
        sh_form.beSigned(buo);
        buo.signForm(sh_form);
        buo.executeForm(sh_form);
        RobotomyRequestForm r_form("MBANI");
        r_form.beSigned(buo);
        buo.signForm(r_form);
        Bureaucrat exec("exec", 3);
        exec.executeForm(r_form);
        std::cout << "-------------------------------------\n";
        Intern intern;
        Form *f1 = intern.makeForm("PresidentialPardonForm", "BENDER");
        buo.executeForm(*f1);
        buo.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}