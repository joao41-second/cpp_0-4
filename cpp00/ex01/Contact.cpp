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

std::string Contact::set_the_string(std::string chek)
{
	std::string dup = chek;
	if(dup.size() >= 10)
	{
		dup[9]='.';
		dup.resize(10);
	}
	else 
	{
		std::cout << std::string(10-dup.size(),' ');
	}
	return (dup);
}

void Contact::print_contact_line(int index)
{
	std::cout << std::string(9,' ') << index+1 << "|";
	std::cout << set_the_string(first_name) << "|";
	std::cout << set_the_string(last_name) << "|";
	std::cout << set_the_string(nickname) << "|" <<std::endl;
}
