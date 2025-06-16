/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WorngCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:54:23 by jperpct           #+#    #+#             */
/*   Updated: 2025/06/16 10:56:42 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WorngAnimal.hpp"
#include "WorngCat.hpp"

WorngCat::WorngCat() : WorngAnimal("WorngCatilit") 
{
	std::cout << "Start cat" << std::endl;
}

WorngCat::WorngCat(WorngCat &cat) : WorngAnimal(cat._string)
{
	std::cout << "Copy cat" << std::endl;
	*this = cat;
}

WorngCat & WorngCat::operator=(WorngCat &var)
{
	this->_string = var._string;
	return *this;
}

void WorngCat::makeSound() const 
{
	std::cout << "miao miao" << std::endl;
}

WorngCat::~WorngCat()
{
	std::cout << "end cat" << std::endl;
}

