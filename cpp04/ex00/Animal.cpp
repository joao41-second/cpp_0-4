#include "Animal.hpp"
#include <string>

Animal::Animal(std::string string):_string(string)
{
	std::cout << "Start Animal" << std::endl;
}

Animal::Animal():_string("NULL")
{
	std::cout << "Start Animal in NULL" << std::endl;
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


std::string Animal::get_Type() const 
{
	return (this->_string);
}

void Animal::makeSound() const
{
	std::cout  << "animal not set " << std::endl;
}
