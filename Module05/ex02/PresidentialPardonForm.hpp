/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:25:25 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/22 10:11:04 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        const std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& obj);
        PresidentialPardonForm& operator = (const PresidentialPardonForm& obj);
        ~PresidentialPardonForm();
        std::string getTarget() const;
        void        execute(Bureaucrat const &executor) const;
};