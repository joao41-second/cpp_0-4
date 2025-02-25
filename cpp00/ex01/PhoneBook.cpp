#include "Contact.hpp"
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
	e = -1;
	if(i == -1)
	{
		while(++e != 8)
		{
			contat[e].print_contact_line(e);
		}
	}
}
