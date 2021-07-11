/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:38:46 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/04/03 17:38:35 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADER_H
#define MY_HEADER_H
#include <iostream>
#include <iomanip>
#include <cstdlib>

class MyContact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string login;
        std::string postalAddress;
        std::string emailAddress;
        std::string phoneNumber;
        std::string BirthdayDate;
        std::string favoriteMeal;
        std::string underwearColor;
        std::string darkestSecret;
    public :
        void print_list_contact();
        std::string GetfirstName();
        std::string GetlastName();
        std::string GetnickName();
        std::string Getlogin();
        std::string GetpostalAddress();
        std::string GetemailAddress();
        std::string GetphoneNumber();
        std::string GetBirthdayDate();
        std::string GetfavoriteMeal();
        std::string GetunderwearColor();
        std::string GetdarkestSecret();
        void SetfirstName(std::string);
        void SetlastName(std::string);
        void SetnickName(std::string);
        void Setlogin(std::string);
        void SetpostalAddress(std::string);
        void SetemailAddress(std::string);
        void SetphoneNumber(std::string);
        void SetBirthdayDate(std::string);
        void SetfavoriteMeal(std::string);
        void SetunderwearColor(std::string);
        void SetdarkestSecret(std::string);        
        MyContact();
};

#endif