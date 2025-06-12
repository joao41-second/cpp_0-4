/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:30:25 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/20 14:33:41 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include <algorithm>
#include <iostream>
#include <ostream>

ClapTrap::ClapTrap(std::string str)
{
	std::cout << "new ClapTrap " << std::endl;
	_points_attack = 0;
	_points_energy = 10;
	_points_hit = 10;
	_name = str;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	std::cout << "new ClapTrap " << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "end ClapTrap " << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &other)
{
	std::cout << "new ClapTrap " << std::endl;
	if(this != &other)
	{
		this->_name = other._name;
		this->_points_hit = other._points_hit;
		this->_points_attack = other._points_attack;
		this->_points_energy = other._points_energy;
	}
	return *this;
}


void ClapTrap::attack(const std::string& target)
{
	if(this->_points_energy > 0 && this->_points_hit > 0)
	{
		std::cout << _name <<": attack the :"<< target << std::endl;
		this->_points_energy--;
	}else if( this->_points_energy <= 0)
	{
		std::cout << _name <<": not energy for attack" << std::endl;
	}
	else {

		std::cout << _name << ": not hits for attack" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_points_energy > 0 && this->_points_hit > 0)
	{
		
		this->_points_energy --;
		if(amount + this->_points_hit > 10)
			this->_points_hit = 10;
		else
		 this->_points_hit += amount;
		std::cout << _name <<": add _points_hit" << std::endl;
	}
	else if(this->_points_energy <= 0 )
	{

		std::cout << _name <<": not energy" << std::endl;
	}
	else 
		std::cout << _name <<": is a dead" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount)
{
	if(amount >= (unsigned)this->_points_hit)
		this->_points_hit = 0;
	else
		this->_points_hit-=amount;

	if(this->_points_hit <= 0)
		std::cout << _name <<": killed" <<std::endl;
	else 
		std::cout << _name << ": I am for attacked" << std::endl;

}

void ClapTrap::status(void)
{
	std::cout << _name << " : " << _points_hit << " , " << _points_energy << " , " << _points_attack << ":" <<std::endl;
}  

std::string ClapTrap::get_name()
{
	return this->_name;
}
