/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:30:25 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/20 12:40:19 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include <algorithm>


ClapTrap::ClapTrap(std::string str):_points_attack(0),_points_energy(10),_points_hit(10),_name(str)
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
}

void ClapTrap::beRepaired(unsigned int amount)
{
}

void ClapTrap::takeDamage( unsigned int amount)
{
}
