
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
	this->_points_energy = energy;
	this->_points_hit = hit;
	this->_points_attack = atack;
	std::cout << "new FragTrap" << std::endl;
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap(other._name)
{
	*this = other;
	std::cout << "new FragTrap" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &other)
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


void FragTrap::highFivesGuys(void)
{
	if(this->_points_energy > 0 && this->_points_hit > 0)
	{

		std::cout << " is fives!!!" << std::endl;
		this->_points_energy--;
	}else if( this->_points_energy <= 0)
	{
		std::cout << "not energy for fives" << std::endl;
	}
	else {

		std::cout << "not hits for fives"  << std::endl;
	}

}

FragTrap::~FragTrap()
{
	std::cout << "end FragTrap" << std::endl;
}

std::string FragTrap::get_name()
{
	return this->_name;

}
