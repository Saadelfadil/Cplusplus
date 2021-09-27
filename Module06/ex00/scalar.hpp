/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:08:16 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/27 13:02:17 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Scalar_H
# define Scalar_H

# include <iostream>
# include <string>
#include <cctype>

class Scalar {
    private:
        std::string _value;
    public :
        ~Scalar();
        Scalar();
        Scalar(std::string value);
        Scalar(Scalar const &obj);
        Scalar & operator = (Scalar const &obj);
        std::string getValue() const;
        void setValue(std::string value);
        void printValues();
        
        class noDisplay : public std::exception{
            public:
                const char *what() const throw();
        };
        
        operator  char();
        operator  int();
        operator  float();
        operator  double();
};

#endif