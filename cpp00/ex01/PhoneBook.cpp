#include "PhoneBook.hpp"

void PhoneBook::set_new (std::string New)
{
	 std::cout << "ola" << std::endl;
	 contat[1] = New; 
}

void PhoneBook::print_contact (int i)
{
	std::cout << contat[i]<< std::endl;
}
