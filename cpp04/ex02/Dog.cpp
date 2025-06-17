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
	std::cout << "Start dog" << std::endl;
}

Dog::Dog(Dog &dog) : Animal(dog.type)
{

	std::cout << "Copy dog" << std::endl;
	*this = dog;
}

Dog & Dog::operator=(Dog &var)
{

	this->type = var.type;
	return *this;
}

void Dog::makeSound() const 
{
	std::cout << "aoaoaoaoaoaoa" << std::endl;
}

Dog::~Dog()
{

	std::cout << "end dog" << std::endl;
}

