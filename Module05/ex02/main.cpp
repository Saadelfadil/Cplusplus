/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:38 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/02 11:45:31 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
 
int main()
{
    Bureaucrat bure_a("bure_A", 2);
    Bureaucrat bure_b("bure_B", 70);
    Bureaucrat bure_c("bure_C", 139);
 
    Form form_a("form_A", 10, 10);
    Form form_b("form_B", 71, 10);
    Form form_c("form_C", 130, 140);
    try
    {
        bure_a.signForm(form_a);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        bure_b.signForm(form_b);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        bure_c.signForm(form_c);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}