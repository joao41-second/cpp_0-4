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
#include <math.h>

int  Fixed::_fract = 8;

// constuct
Fixed::Fixed():_vaule(0)
{
//	std::cout << "create the Fixed" << std::endl;
}


Fixed::Fixed(const int new_value)
{
	this->_vaule = new_value << this->_fract;

//	std::cout << "create the Fixed used int " << std::endl;
}

Fixed::Fixed(const float new_value)
{
	this->_vaule =  roundf(new_value * (1 << this->_fract));

//	std::cout << "create the Fixed used float " << std::endl;
}



// distruct
Fixed::~Fixed()
{

//	std::cout << "distoied the Fixed" << std::endl;
}


// copy
Fixed::Fixed(const Fixed &other)
{
  //std::cout << "copy the class" << std::endl;
  *this = other;
}

// obrtload operators
//
//
Fixed &Fixed::operator=(const Fixed &src)
{
	//std::cout << "Assignation operator called" << std::endl;
	if(this != &src)
	{
		this->_vaule= src.getRawBits();
	}
  return (*this);
}


// yes now statr the class


// the getRawBits return the value saved in bits 
int Fixed::getRawBits() const
{
//	std::cout << "get the getRawBits" << std::endl;
	return(_vaule);
}


// the setRawBits set new vaule for save 
void Fixed::setRawBits(int vaule)
{

//	std::cout << "sete new vaule" << std::endl;
	_vaule = vaule;
}


int Fixed::toInt(void) const
{
	return(this->_vaule  >> this->_fract);
}

float Fixed::toFloat(void) const
{
	return((float) this->_vaule / (float)( 1 << this->_fract));
}


Fixed Fixed::operator*(Fixed const &other) const
{
	Fixed ret;

	ret.setRawBits(
			(this->getRawBits() * other.getRawBits())
			>> this->_fract);
	return (ret);
}

Fixed Fixed::operator/(Fixed const &other) const
{
	Fixed ret;

	ret.setRawBits(
			(this->getRawBits() / other.getRawBits())
			<< this->_fract);
	return (ret);
}
Fixed Fixed::operator+(Fixed const &other) const
{
	Fixed ret;

	ret.setRawBits(
			(this->getRawBits() + other.getRawBits()));
	return (ret);
}
Fixed Fixed::operator-(Fixed const &other) const
{
	Fixed ret;

	ret.setRawBits(
			(this->getRawBits() - other.getRawBits()));
	return (ret);
}
bool Fixed::operator<(Fixed const &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>(Fixed const &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<=(Fixed const &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator>=(Fixed const &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator==(Fixed const &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(Fixed const &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

// operator para std::count; 

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return(o);
}

