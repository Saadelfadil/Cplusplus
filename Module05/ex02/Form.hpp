/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/22 10:14:01 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private :
        const std::string _name;
        bool _inde;
        const int _gradeSign;
        const int _gradeExec;
    public :
        Form();
        virtual ~Form();
        Form(std::string name, const int gradeSign, const int gradeExec);
        Form(Form const &obj);
        Form & operator = (Form const &obj);

        const std::string   getName() const;
        bool                getInde() const;
        int                 getGradeSign() const;
        int                 getGradeExec() const;
        void                beSigned(Bureaucrat &bureau);

        virtual void		execute( Bureaucrat const & executor ) const = 0;
        
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
        class FormNotSigned : public std::exception{
            public:
                const char *what() const throw();
        };
};

std::ostream &		operator << ( std::ostream & o, Form const & i );

#endif