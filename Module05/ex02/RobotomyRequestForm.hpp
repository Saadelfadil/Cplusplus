/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:25:25 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/23 16:53:44 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <fstream>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        const std::string _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& obj);
        RobotomyRequestForm& operator = (const RobotomyRequestForm& obj);
        ~RobotomyRequestForm();
        std::string getTarget() const;
        void        execute(Bureaucrat const &executor) const;
};