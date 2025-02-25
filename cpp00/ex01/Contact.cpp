#include "Contact.hpp"

void Contact::set_new_contact ()
{
	std::cout << "the frist name" << std::endl;
	std::cin >> first_name;
	std::cout << "the last name" << std::endl;
	std::cin >> last_name;
	std::cout << "the nickname"<< std::endl;
	std::cin >> nickname;
	std::cout << "the fonenumber"<< std::endl;
	std::cin >> phonenumber;
}

void Contact::print_contact()
{
	std::cout << "the frist name" << std::endl;
	std::cout << first_name;
	std::cout << "the last name" << std::endl;
	std::cout << last_name;
	std::cout << "the nickname"<< std::endl;
	std::cout << nickname;
	std::cout << "the fonenumber"<< std::endl;
	std::cout << phonenumber;
}
