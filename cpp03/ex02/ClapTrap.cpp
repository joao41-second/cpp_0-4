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
#include "ScavTrap.hpp"
#include <algorithm>
#include <iostream>
#include <ostream>


ClapTrap::ClapTrap(std::string str):
	_points_attack(this->atack),
	_points_energy(this->energy),
	_points_hit(this->energy),_name(str)
{
}


ClapTrap::ClapTrap(ClapTrap &copy)
{
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "end ClapTrap " << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &other)
{
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

		std::cout << " attack" << std::endl;
		this->_points_energy--;
	}else if( this->_points_energy <= 0)
	{
		std::cout << "not energy for attack" << std::endl;
	}
	else {

		std::cout << "not hits for attack" << std::endl;
	}

	status();
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_points_energy > 0 && this->_points_hit > 0)
	{
		
		this->_points_energy --;
		if(amount + this->_points_hit > this->hit)
			this->_points_hit = this->hit;
		else
		 this->_points_hit += amount;
		std::cout << "add _points_hit" << std::endl;
	}
	else if(this->_points_energy < 0 )
	{

		std::cout << "not energy" << std::endl;
	}else 
		std::cout << "is a dead" << std::endl;

	status();
}

void ClapTrap::takeDamage( unsigned int amount)
{
	if(amount >= this->_points_hit)
		this->_points_hit = 0;
	else
		this->_points_hit-=amount;
	std::cout << "I am for attacked" << std::endl;
	if(this->_points_hit <= 0)
		std::cout << "kill-" << this->_name <<std::endl;
	status();

}

std::string ClapTrap::get_name()
{
	return this->_name;

}

void ClapTrap::status()
{
	std::cout << "_points_hit " << this->_points_hit << std::endl;
	std::cout << "_points_energy " << this->_points_energy << std::endl;
	std::cout << "_points_attack " << this->_points_attack << std::endl;


}
