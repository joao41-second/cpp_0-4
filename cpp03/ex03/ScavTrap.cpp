/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:39:53 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/20 18:21:06 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>
#include <string>


ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
	this->_points_energy = energy;
	this->_points_hit = hit;
	this->_points_attack = atack;
	std::cout << "new ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other) : ClapTrap(other._name)
{
	*this = other;
}

ScavTrap &ScavTrap::operator=(ScavTrap &other)
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


void ScavTrap::attack(std::string name)
{
	if(this->_points_energy > 0 && this->_points_hit > 0)
	{

		std::cout << " attack wowoww" << std::endl;
		this->_points_energy--;
	}else if( this->_points_energy <= 0)
	{
		std::cout << "not energy for attack ooooo" << std::endl;
	}
	else {

		std::cout << "not hits for nouu"  << std::endl;
	}

}

void ScavTrap::guardGate()
{
	if(this->_points_energy > 0 && this->_points_hit > 0)
	{

		std::cout << " enable gate mode" << std::endl;
		this->_points_energy--;
	}else if( this->_points_energy <= 0)
	{
		std::cout << "not energy for gate node " << std::endl;
	}
	else {

		std::cout << "not is posible start gate mode"  << std::endl;
	}

}
std::string ScavTrap::get_name()
{
	return this->_name;

}


ScavTrap::~ScavTrap()
{

		std::cout << "end ScavTrap"  << std::endl;
}
