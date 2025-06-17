#include "Animal.hpp"
#include <string>
#include "Brain.hpp"

Animal::Animal(std::string string):type(string)
{

	this->_brain = new Brain();
	std::cout << "Start Animal" << std::endl;
}

Animal::Animal():type("")
{
	_brain = NULL;
	std::cout << "Start Animal in NULL" << std::endl;
}

Animal::Animal(Animal &Animal) 
{
	std::cout << "Copy Animal" << std::endl;
	this->_brain = new Brain(*Animal._brain);
	this->type = Animal.type;
	*this = Animal;
}

Animal & Animal::operator=(Animal &var)
{

	this->_brain = new Brain(*var._brain);
	this->type = var.type;
	return *this;
}


Animal::~Animal()
{
	delete _brain;
	std::cout << "end Animal" << std::endl;
}


std::string Animal::get_Type() const 
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout  << "animal not set " << std::endl;
}

std::string Animal::get_ideas(int index) const
{
	(void)index;
	if(type == "")
		return("not ideas");
	return(_brain->get_ideas(index));
}
void Animal::set_ideas(int index,std::string str) const 
{
	(void)index;
	(void)str;
	if(type == "")
		std::cout << "not ideas" << std::endl;
	else
		_brain->set_ideas(index,str);
}
