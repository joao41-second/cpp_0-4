
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include "Contact.hpp"
#include <iostream>
class PhoneBook
{
	Contact contat[8];
	public:
		void set_new ();
		void print_contact (int);
		void chets();
};
#endif


