/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:20:57 by jperpct           #+#    #+#             */
/*   Updated: 2025/06/16 12:07:36 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dogilit")
{
	 _brain = new Brain();
	std::cout << "Start dog" << std::endl;
}

Dog::Dog(Dog &dog) : Animal(dog._string)
{
	std::cout << "Copy dog" << std::endl;
	*this = dog;
}

Dog & Dog::operator=(Dog &var)
{
	this->_string = var._string;
	return *this;
}

void Dog::makeSound() const 
{
	std::cout << "aoaoaoaoaoaoa" << std::endl;
}

Dog::~Dog()
{

	delete _brain;
	std::cout << "end dog" << std::endl;
}


void Dog::set_ideas(int index, std::string str) const
{
	_brain->set_ideas(index,str);
}


std::string Dog::get_ideas(int index) const
{
	return(_brain->get_ideas(index));
}
