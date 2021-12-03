#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class Contact 
{
   public:
      int         index;
      std::string first_name;
      std::string last_name;
      std::string nickname;
      std::string phone_number;
      std::string darkest_secret;
      void add();
      void search( void );
      Contact();
      ~Contact();
};
 
class PhoneBook
{
public:
	Contact	contact[8];

	// void	printThisContact(void);
	// void	printAllContacts(void);
	// void	rewriteContact(void);

	// std::string	AdaptationText(std::string str);
};


Contact::Contact(void) 
{
   std::cout << "Object is being created" << std::endl;
}

Contact::~Contact(void) 
{
   std::cout << "Object is being delete" << std::endl;
}

void Contact::add()
{
   std::cout << "First name: ";
   std::cin >> this->first_name;
   std::cout << "Last name: ";
   std::cin >> this->last_name;
   std::cout << "Nickname: ";
   std::cin >> this->nickname;
   std::cout << "Phone number: ";
   std::cin >> this->phone_number;
   std::cout << "Darkest secret: ";
   std::cin >> this->darkest_secret;
}

void Contact::search()
{
   std::cout << "First name: " << this->first_name << std::endl;
   std::cout << "Last name: " << this->last_name << std::endl;
   std::cout << "Nickname: " << this->nickname << std::endl;
   std::cout << "Phone number: " << this->phone_number << std::endl;
   std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

#endif