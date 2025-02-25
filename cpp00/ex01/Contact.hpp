
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
class Contact
{
	std::string first_name,last_name,nickname,darkest;
	int phonenumber;
	private:
		std::string set_the_string(std::string);
	public:
		void set_new_contact();
		void print_contact();
		void print_contact_line(int);
};

#endif // !CONTACT_HPP
