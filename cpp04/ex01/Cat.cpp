/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:45:03 by jperpct           #+#    #+#             */
/*   Updated: 2025/06/16 12:08:34 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Catilit") 
{
	 _brain = new Brain();
	std::cout << "Start cat" << std::endl;
}

Cat::Cat(Cat &cat) : Animal(cat._string)
{
	std::cout << "Copy cat" << std::endl;
	*this = cat;
}

Cat & Cat::operator=(Cat &var)
{
	this->_string = var._string;
	return *this;
}

void Cat::makeSound() const 
{
	std::cout << "miao miao" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "end cat" << std::endl;
}


void Cat::set_ideas(int index, std::string str) const
{
	_brain->set_ideas(index,str);
}


std::string Cat::get_ideas(int index) const
{
	return(_brain->get_ideas(index));
}

