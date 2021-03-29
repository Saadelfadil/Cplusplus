#include <iostream>
#include "main.hpp"

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
    std::cout << "Enter first name : ";
    std::cin >> list_contact[i].firstName;
    std::cout << "Enter last name : ";
    std::cin >> list_contact[i].lastName;
    std::cout << "Enter nickName : ";
    std::cin >> list_contact[i].nickName;
    std::cout << "Enter login : ";
    std::cin >> list_contact[i].login;
    std::cout << "Enter postalAddress : ";
    std::cin >> list_contact[i].postalAddress;
    std::cout << "Enter emailAddress : ";
    std::cin >> list_contact[i].emailAddress;
    std::cout << "Enter phoneNumber : ";
    std::cin >> list_contact[i].phoneNumber;
    std::cout << "Enter BirthdayDate : ";
    std::cin >> list_contact[i].BirthdayDate;
    std::cout << "Enter favoriteMeal : ";
    std::cin >> list_contact[i].favoriteMeal;
    std::cout << "Enter underwearColor : ";
    std::cin >> list_contact[i].underwearColor;
    std::cout << "Enter darkestSecret : ";
    std::cin >> list_contact[i].darkestSecret;
    return (i + 1);
}

void print_Contact(MyContact *list_contact, int i)
{
    int y = 0;
    int cmd;

    while (y < i)
    {
        std::cout << y << " | "<<list_contact[y].firstName<< " | "<<list_contact[y].lastName<< " | "<<list_contact[y].login<< std::endl;
        y++;
    }
    std::cout << "Index : ";
	std::cin >> cmd;
    std::cout << std::endl;
    list_contact[cmd].print_list_contact();
}

int main()
{
    MyContact list_contact[7];
    int i = 0;
    std::string cmd;

    while (1)
    {
        std::cout << "Command : ";
		std::cin >> cmd;
        if (cmd == "EXIT")
            exit(0);
        else if (cmd == "ADD")
            i = add_Contact(list_contact, i);
        else if (cmd == "SEARCH")
            print_Contact(list_contact, i);
    }
}