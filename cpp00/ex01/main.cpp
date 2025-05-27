
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>


int main(void)
{
	PhoneBook ok;
	std::string line;
	ok.chets();

	std::cout << " Start ofthe PhoneBook :" << std::endl;
	while (line != "EXIT")
	{
		std::getline(std::cin,line);

		if(line == "ADD")
			ok.set_new();
		if(line == "SEARCH")
			ok.print_contact(-1);
	}
	
}
