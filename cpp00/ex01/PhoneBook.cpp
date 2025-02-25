#include "Contact.hpp"
#include <cstdio>
#include <iostream>
#include <string>
#include "PhoneBook.hpp"


void PhoneBook::set_new ()
{
	static int nb;
	 contat[nb].set_new_contact();
	if (nb == 7)
		nb = -1;
	nb++;
}

void PhoneBook::print_contact (int i)
{
	int e;
	std::string nb;
	e = -1;
	if(i == -1)
	{
		while(++e != 8)
		{
			contat[e].print_contact_line(e);
		}
	}
	std::getline(std::cin,nb);
	if(std::stoi(nb) <= 8 && std::stoi(nb)> -1)
		contat[std::stoi(nb)].print_contact();
	else 
		std::cout << "not number valid" << std::endl;
}

void::PhoneBook::chets()
{
	int i = -1;
	while (i++ != 7)
	{
		contat[i].sd_contact();
	}
}
