/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/02 11:32:20 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>

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

#endif