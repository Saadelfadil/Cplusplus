/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:38:40 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/29 08:55:51 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "main.hpp"
#include <iomanip>
#include <cstdlib>

MyContact::MyContact()
{
    this->firstName = "";
    this->lastName = "";
    this->nickName = "";
    this->login = "";
    this->postalAddress = "";
    this->emailAddress = "";
    this->phoneNumber = "";
    this->BirthdayDate = "";
    this->favoriteMeal = "";
    this->underwearColor = "";
    this->darkestSecret = "";
}

int add_Contact(MyContact *list_contact, int i)
{
    std::string tmp;
    if (i < 8)
    {
        std::cout << "Enter first name : ";
        getline(std::cin, tmp);
        list_contact[i].SetfirstName(tmp);
        std::cout << "Enter last name : ";
        getline(std::cin, tmp);
        list_contact[i].SetlastName(tmp);
        std::cout << "Enter nickName : ";
        getline(std::cin, tmp);
        list_contact[i].SetnickName(tmp);
        std::cout << "Enter login : ";
        getline(std::cin, tmp);
        list_contact[i].Setlogin(tmp);
        std::cout << "Enter postalAddress : ";
        getline(std::cin, tmp);
        list_contact[i].SetpostalAddress(tmp);
        std::cout << "Enter emailAddress : ";
        getline(std::cin, tmp);
        list_contact[i].SetemailAddress(tmp);
        std::cout << "Enter phoneNumber : ";
        getline(std::cin, tmp);
        list_contact[i].SetphoneNumber(tmp);
        std::cout << "Enter BirthdayDate : ";
        getline(std::cin, tmp);
        list_contact[i].SetBirthdayDate(tmp);
        std::cout << "Enter favoriteMeal : ";
        getline(std::cin, tmp);
        list_contact[i].SetfavoriteMeal(tmp);
        std::cout << "Enter underwearColor : ";
        getline(std::cin, tmp);
        list_contact[i].SetunderwearColor(tmp);
        std::cout << "Enter darkestSecret : ";
        getline(std::cin, tmp);
        list_contact[i].SetdarkestSecret(tmp);
        return (i + 1);
    }
    else
        std::cout << "You Can't Entre More Than 8 Contacts!" << std::endl;
    return (i);
}

void parse(std::string info, int len)
{
    char word[11];
    int sp;
    int i = 0;
    int j = 0;
    sp = 10 - len;
    while (i < sp)
    {
        word[i] = ' ';
        i++;
    }
    sp = 10 - sp;
    while (sp)
    {
        word[i] = info[j];
        j++;
        i++;
        sp--;
    }
    std::cout << word << "|";
}

void trunc(std::string info)
{
    char word[11];
    int i = 0;
    while (i < 10)
    {
        word[i] = info[i];
        i++;
    }
    word[9] = '.';
    word[10] = '\0';
    std::cout << word << "|";
}

void print(MyContact *list_contact, int y)
{
    int len;
    std::cout.width(10);
    std::cout << std::right << y << "|";
    if ((len = list_contact[y].GetfirstName().length()) <= 10)
        parse(list_contact[y].GetfirstName(), len);
    else
        trunc(list_contact[y].GetfirstName());
    if ((len = list_contact[y].GetlastName().length()) <= 10)
        parse(list_contact[y].GetlastName(), len);
    else
        trunc(list_contact[y].GetlastName());
    if ((len = list_contact[y].Getlogin().length()) <= 10)
        parse(list_contact[y].Getlogin(), len);
    else
        trunc(list_contact[y].Getlogin());
    std::cout << std::endl;
}

void intro_bar()
{
    std::cout.width(11);
    std::cout << std::right << "Index|";
    std::cout.width(11);
    std::cout << std::right << "First name|";
    std::cout.width(11);
    std::cout << std::right << "Last name|";
    std::cout.width(11);
    std::cout << std::right << "Nickname|" << std::endl;
}

int string_isdigit(std::string str)
{
    size_t i = 0;
    while (i < str.length())
    {
        if (isdigit(str[i]))
            i++;
        else
            return (0);
    }
    return (1);
}

void print_Contact(MyContact *list_contact, int i)
{
    int y = 0;
    std::string cmd;
    int index = 0;
    intro_bar();
    while (y < i)
    {
        print(list_contact, y);
        y++;
    }
    std::cout << "Index : ";
    getline(std::cin, cmd);
    if (cmd.size() == 0)
        std::cout << "Index error can you give a digit please" << std::endl;
    else if (string_isdigit(cmd))
    {
        index = stoi(cmd);
        if (index < 8)
        {
            if (index < i)
                list_contact[index].print_list_contact();
            else
                std::cout << "Index not found!" << std::endl;
        }
        else if (index >= 8)
            std::cout << "Index not found! please give index between 0 and 7" << std::endl;
    }
    else if (!string_isdigit(cmd))
        std::cout << "Index error can you give a digit please" << std::endl;
}

int main()
{
    MyContact list_contact[8];
    int i = 0;
    std::string cmd;
    while (1)
    {
        std::cout << "Command : ";
        getline(std::cin, cmd);
        if (cmd == "EXIT")
            exit(0);
        else if (cmd == "ADD")
            i = add_Contact(list_contact, i);
        else if (cmd == "SEARCH")
            print_Contact(list_contact, i);
        else
            std::cout << "Command not found please!" << std::endl;
    }
}