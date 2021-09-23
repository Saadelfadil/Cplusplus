/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:38 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/23 17:00:25 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << "*** ShrubberyCreationForm ****\n" ;
    try{
        Bureaucrat b1("B1", 3); // change the grade to test execution exception
        ShrubberyCreationForm f1("HOME");
        std::cout << f1;
        std::cout << b1;
        f1.beSigned(b1); // comment this to test signed execution exception
        f1.execute(b1);
        // b1.executeForm(f1);
    } catch (std::exception& e){
        std::cout << e.what();
    }

    std::cout << "*** RobotomyRequestForm ****\n" ;
    try{
        Bureaucrat b1("B1", 3); // change the grade to test execution exception
        RobotomyRequestForm f1("HOME");
        std::cout << f1;
        std::cout << b1;
        f1.beSigned(b1); // comment this to test signed execution exception
        //f1.execute(b1);
        b1.executeForm(f1);
    } catch (std::exception& e){
        std::cout << e.what();
    }

    std::cout << "*** PresidentialPardonForm ****\n" ;
    try{
        Bureaucrat b1("B1", 3); // change the grade to test execution exception
        PresidentialPardonForm f1("HOME");
        std::cout << f1;
        std::cout << b1;
        f1.beSigned(b1); // comment this to test signed execution exception
        //f1.execute(b1);
        b1.executeForm(f1);
    } catch (std::exception& e){
        std::cout << e.what();
    }
}