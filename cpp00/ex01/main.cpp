
#include "Contact.hpp"
#include "PhoneBook.hpp"


int main(void)
{
	PhoneBook ok;
	std::string line;
	while (line != "EXIT")
	{
		std::cin.clear();
		std::cin >> line;
		if(line == "ADD")
			ok.set_new();
		if(line == "SEARCH")
			ok.print_contact(-1);
	}
	
}
