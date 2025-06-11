/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 09:35:25 by jperpct           #+#    #+#             */
/*   Updated: 2025/03/08 10:06:43 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int  Fixed::_fract = 8;

Fixed::Fixed():_vaule(0)
{
	std::cout << "create the Fixed" << std::endl;
}
Fixed::~Fixed()
{

	std::cout << "distroied the Fixed" << std::endl;
}

Fixed::Fixed(Fixed &other)
{
  std::cout << "copy the class" << std::endl;
  *this = other;
}

Fixed& Fixed::operator=(Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if(this != &other)
	{
		_vaule = other.getRawBits();
	}
  return (*this);
}

int Fixed::getRawBits()
{
	std::cout << "get the getRawBits" << std::endl;
	return(_vaule);
}
void Fixed::setRawBits(int vaule)
{

	std::cout << "sete new vaule" << std::endl;
	_vaule = vaule;
}

