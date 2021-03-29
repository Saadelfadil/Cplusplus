#ifndef MY_HEADER_H
#define MY_HEADER_H
#include <iostream>

class MyContact {
    public :
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
        MyContact();
        void print_list_contact();
};

#endif