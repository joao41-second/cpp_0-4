#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook ok;
	ok.set_new("ola mundo");
	ok.print_contact(1);
	std::cout << "ok\n";
}
