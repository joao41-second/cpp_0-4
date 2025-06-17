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
	std::cout << "Start cat" << std::endl;
}

Cat::Cat(Cat &cat) : Animal(cat.type)
{
	*this = cat;
	std::cout << "Copy cat" << std::endl;
}

Cat & Cat::operator=(Cat &var)
{

	this->type = var.type;
	return *this;
}

void Cat::makeSound() const 
{
	std::cout << "miao miao" << std::endl;
}

Cat::~Cat()
{
	std::cout << "end cat" << std::endl;
}

