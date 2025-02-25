
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class PhoneBook 
{
	std::string contat[8];
	public:
		void set_new (std::string);
		void print_contact (int);
};
#endif


