/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:06:47 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/28 17:36:57 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"
#include "Weapon.hpp"


HumanB::HumanB(std::string name)
{
	std::cout << "create the HumanB" <<std::endl;
	_name = name;
}

void HumanB::setWeapon(Weapon& weapon) 
{
	std::cout << "new Weapon" <<std::endl;
	_Weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << _name << " attacks with their " << _Weapon->getType() << std::endl;
}

HumanB::~HumanB()
{

	std::cout << "end the HumanB" <<std::endl;

}
