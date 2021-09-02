/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/02 12:10:35 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>

class Form {
    private :
        const std::string _name;
        bool _inde;
        const int _gradeSign;
        const int _gradeExec;
    public :
        virtual ~Form();
        Form();
        Form(std::string name, int grade);
        Form(Form const &obj);
        Form & operator = (Form const &obj);

        const std::string getName() const;
        int         getGradeSign() const;
        const int         getInde() const;
        const int         getGradeSign() const;
};

std::ostream &		operator << ( std::ostream & o, Form const & i );

#endif