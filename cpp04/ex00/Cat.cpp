/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:45:03 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/23 14:17:11 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Catilit")
{
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

void Cat::makeSound()
{
	std::cout << "miao miao" << std::endl;
}

Cat::~Cat()
{
	std::cout << "end cat" << std::endl;
}

