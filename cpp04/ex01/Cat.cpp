/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:45:03 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/26 11:59:10 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include "Cat.hpp"

Cat::Cat() : Animal("Catilit")
{
	this->_mybaind = new Brain;
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
	delete _mybaind;
	std::cout << "end cat" << std::endl;
}

void Cat::set_memory(int index,std::string std)
{
	this->_mybaind->set_memory(index, std);
}

std::string Cat::get_memory(int index)
{
	return (this->_mybaind->get_memory(index));
}


