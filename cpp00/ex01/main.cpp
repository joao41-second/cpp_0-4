#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook ok;
	std::string ola;
	ok.set_new("ola mundo");
	ok.print_contact(1);
	std::cout << "enter the ADD more contact or SEARCH or EXIT" << std::endl;
	std::cin >> ola;
	if(ola == (std::string)"ADD")
		std::cout << "add foi compleot";
}
