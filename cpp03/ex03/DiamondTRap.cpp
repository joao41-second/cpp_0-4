/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTRap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:40:33 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/20 20:09:06 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <ostream>
#include <string>

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_Clap_name"), FragTrap(_name +"_Clap_name") ,ScavTrap(_name+"_Clap_name")
{
	this->_name = _name;	
	this->_points_attack = FragTrap::atack;
	this->_points_energy = ScavTrap::energy;
	this->_points_hit = FragTrap::hit;
	std::cout << "the prints not oranize" << std::endl; 
}

DiamondTrap::DiamondTrap(DiamondTrap &copy) : ClapTrap(copy._name + "_Clap_name"), FragTrap(copy._name +"_Clap_name") ,ScavTrap(copy._name+"_Clap_name")
{
	*this = copy;
}


DiamondTrap &DiamondTrap::operator=(DiamondTrap & other)
{
	this->_name = other._name;
	this->_points_attack = other._points_attack;
	this->_points_energy = other._points_energy;
	this->_points_hit = FragTrap::hit;
	return *this;
}


DiamondTrap::~DiamondTrap()
{
}

void DiamondTrap::whoAmI()
{ 
	std::cout << "not goo lor of the is use this function " << std::endl;
}

std::string DiamondTrap::get_name()
{
	return this->_name;

}
