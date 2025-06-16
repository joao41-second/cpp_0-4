#include "Animal.hpp"
#include <string>

Animal::Animal(std::string string):type(string)
{
	std::cout << "Start Animal" << std::endl;
}

Animal::Animal():type("")
{
	std::cout << "Start Animal in NULL" << std::endl;
}

Animal::Animal(Animal &Animal) 
{
	std::cout << "Copy Animal" << std::endl;
	this->type = Animal.type;
	*this = Animal;
}

Animal & Animal::operator=(Animal &var)
{
	this->type = var.type;
	return *this;
}


Animal::~Animal()
{
	std::cout << "end Animal" << std::endl;
}


std::string Animal::get_Type() const 
{
	return (this->type);
}


