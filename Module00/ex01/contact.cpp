/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:51:28 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/04/03 17:39:06 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void MyContact::print_list_contact()
{

    std::cout << "First Name : " << this->firstName << std::endl;
    std::cout << "Last Name : " << this->lastName << std::endl;
    std::cout << "Nickname : " << this->nickName << std::endl;
    std::cout << "Login : " << this->login << std::endl;
    std::cout << "Postal Adress : " << this->postalAddress << std::endl;
    std::cout << "Email : " << this->emailAddress << std::endl;
    std::cout << "Phone Number : " << this->phoneNumber << std::endl;
    std::cout << "Birthday : " << this->BirthdayDate << std::endl;
    std::cout << "Favorite Meal : " << this->favoriteMeal << std::endl;
    std::cout << "Underwear Color : " << this->underwearColor << std::endl;
    std::cout << "Darkest Secret : " << this->darkestSecret << std::endl;
}

std::string MyContact::GetfirstName()
{
	return firstName;
}

std::string MyContact::GetlastName()
{
	return lastName;
}

std::string MyContact::GetnickName()
{
	return nickName;
}

std::string MyContact::Getlogin()
{
	return login;
}

std::string MyContact::GetpostalAddress()
{
	return postalAddress;
}

std::string MyContact::GetemailAddress()
{
	return emailAddress;
}

std::string MyContact::GetphoneNumber()
{
	return phoneNumber;
}

std::string MyContact::GetBirthdayDate()
{
	return BirthdayDate;
}

std::string MyContact::GetfavoriteMeal()
{
	return favoriteMeal;
}

std::string MyContact::GetunderwearColor()
{
	return underwearColor;
}

std::string MyContact::GetdarkestSecret()
{
	return darkestSecret;
}

void MyContact::SetfirstName(std::string first_Name)
{
	this->firstName = first_Name;
}

void MyContact::SetlastName(std::string last_Name)
{
	this->lastName = last_Name;
}

void MyContact::SetnickName(std::string nick_Name)
{
    this->nickName = nick_Name;
}

void MyContact::Setlogin(std::string login_)
{
    this->login = login_;
}

void MyContact::SetpostalAddress(std::string postal_Address)
{
    this->postalAddress = postal_Address;
}

void MyContact::SetemailAddress(std::string email_Address)
{
    this->emailAddress = email_Address;
}

void MyContact::SetphoneNumber(std::string phone_Number)
{
    this->phoneNumber = phone_Number;
}

void MyContact::SetBirthdayDate(std::string Birthday_Date)
{
    this->BirthdayDate = Birthday_Date;
}

void MyContact::SetfavoriteMeal(std::string favorite_Meal)
{
    this->favoriteMeal = favorite_Meal;
}

void MyContact::SetunderwearColor(std::string underwear_Color)
{
    this->underwearColor = underwear_Color;
}

void MyContact::SetdarkestSecret(std::string darkest_Secret)
{
    this->darkestSecret = darkest_Secret;
}