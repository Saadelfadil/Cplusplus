/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadmin <mcadmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 12:54:58 by mcadmin           #+#    #+#             */
/*   Updated: 2021/09/24 12:56:16 by mcadmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern& copy);
        Intern& operator = (const Intern& srcObj);
        ~Intern();
        Form* makeForm(std::string formName, std::string target);
        class   doesntExistException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif