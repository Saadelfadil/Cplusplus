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

int add_Contact(MyContact *list_contact, int i)
{
    if (i < 8)
    {
        std::cout << "Enter first name : ";
        getline(std::cin, list_contact[i].firstName);
        std::cout << "Enter last name : ";
        getline(std::cin, list_contact[i].lastName);
        std::cout << "Enter nickName : ";
        getline(std::cin, list_contact[i].nickName);
        std::cout << "Enter login : ";
        getline(std::cin, list_contact[i].login);
        std::cout << "Enter postalAddress : ";
        getline(std::cin, list_contact[i].postalAddress);
        std::cout << "Enter emailAddress : ";
        getline(std::cin, list_contact[i].emailAddress);
        std::cout << "Enter phoneNumber : ";
        getline(std::cin, list_contact[i].phoneNumber);
        std::cout << "Enter BirthdayDate : ";
        getline(std::cin, list_contact[i].BirthdayDate);
        std::cout << "Enter favoriteMeal : ";
        getline(std::cin, list_contact[i].favoriteMeal);
        std::cout << "Enter underwearColor : ";
        getline(std::cin, list_contact[i].underwearColor);
        std::cout << "Enter darkestSecret : ";
        getline(std::cin, list_contact[i].darkestSecret);
    }
    else
    {
        std::cout << "You Can't Entre More Than 8 Contacts!" << std::endl;
		return 0;
    }
    return (i + 1);
}

void	parse(std::string info, int len)
{
	char word[11];
	int sp;
	int i = 0;
	int j = 0;
	sp = 10 - len;
	while(i < sp)
	{
		word[i]=' ';
		i++;
	}
	sp = 10 - sp;
	while(sp)
	{
		word[i]=info[j];
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
    if ((len = list_contact[y].firstName.length()) <= 10)
        parse(list_contact[y].firstName, len);
    else
        trunc(list_contact[y].firstName);
    if ((len = list_contact[y].lastName.length()) <= 10)
        parse(list_contact[y].lastName, len);
    else
        trunc(list_contact[y].lastName);
    if ((len = list_contact[y].login.length()) <= 10)
        parse(list_contact[y].login, len);
    else
        trunc(list_contact[y].login);
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
    if (string_isdigit(cmd))
        index = stoi(cmd);
    else if (!string_isdigit(cmd))
        std::cout << "Index error can you give a digit please" << std::endl;
    else if (index < 8)
        list_contact[index].print_list_contact();
    else if (index > 8)
        std::cout << "Index not found! please give index between 0 and 7" << std::endl;
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
    }
}