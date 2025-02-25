
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook ok;
	std::string line;
	ok.set_new("ola mundo");
	ok.print_contact(1);
	Contact olas;
	olas.set_new_contact();
	olas.print_contact_line(1);

///	std::cin >> line;
	
	while (line != "EXIT")
	{
		std::cin.clear();
		std::cin >> line;
		std::cout << line<< std::endl;
	}
	
}
