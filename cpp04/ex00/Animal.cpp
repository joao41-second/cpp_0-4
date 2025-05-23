#include "Animal.hpp"
#include <string>

Animal::Animal(std::string string):_string(string)
{
	std::cout << "Start Animal" << std::endl;
}

Animal::Animal(Animal &Animal) 
{
	std::cout << "Copy Animal" << std::endl;
	this->_string = Animal._string;
	*this = Animal;
}

Animal & Animal::operator=(Animal &var)
{
	this->_string = var._string;
	return *this;
}


Animal::~Animal()
{
	std::cout << "end Animal" << std::endl;
}

