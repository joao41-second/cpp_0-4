/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:41:06 by jperpct           #+#    #+#             */
/*   Updated: 2025/06/16 10:42:44 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WorngAnimal.hpp"
#include <string>

WorngAnimal::WorngAnimal(std::string string):_string(string)
{
	std::cout << "Start WorngAnimal" << std::endl;
}

WorngAnimal::WorngAnimal():_string("NULL")
{
	std::cout << "Start WorngAnimal in NULL" << std::endl;
}

WorngAnimal::WorngAnimal(WorngAnimal &WorngAnimal) 
{
	std::cout << "Copy WorngAnimal" << std::endl;
	this->_string = WorngAnimal._string;
	*this = WorngAnimal;
}

WorngAnimal & WorngAnimal::operator=(WorngAnimal &var)
{
	this->_string = var._string;
	return *this;
}


WorngAnimal::~WorngAnimal()
{
	std::cout << "end WorngAnimal" << std::endl;
}


std::string WorngAnimal::get_Type() const 
{
	return (this->_string);
}

void WorngAnimal::makeSound() const
{
	std::cout  << "animal not set " << std::endl;
}
