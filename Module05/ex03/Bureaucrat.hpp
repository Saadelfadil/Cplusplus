/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/21 19:03:13 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat {
    private :
        const std::string _name;
        int _grade;
    public :
        virtual ~Bureaucrat();
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &obj);
        Bureaucrat & operator = (Bureaucrat const &obj);

        const std::string getName() const;
        int         getGrade() const;

        void        incrementGrade();
        void        decrementGrade();

        void        signForm(Form const &form);
        void        executeForm(Form const & form);

        class GradeTooHighException : public std::exception{
            public:
                const char *what() const throw();
                GradeTooHighException () throw();
                GradeTooHighException (const GradeTooHighException &obj) throw();
                GradeTooHighException& operator= (const GradeTooHighException &obj) throw();
                virtual ~GradeTooHighException() throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char *what() const throw();
                GradeTooLowException () throw();
				GradeTooLowException (const GradeTooLowException&) throw();
				GradeTooLowException& operator= (const GradeTooLowException&) throw();
				virtual ~GradeTooLowException() throw();
        };
};

std::ostream &		operator << ( std::ostream & o, Bureaucrat const & i );