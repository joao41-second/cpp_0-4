/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:06:47 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/28 16:12:05 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"
#include "Weapon.hpp"


HumanB::HumanB(std::string name)
{
	std::cout << "create the HumanB" <<std::endl;
	_name = name;
}

void HumanB::setWepon(wepon weapon)
{
	std::cout << "new Weapon" <<std::endl;
	_wepon =  weapon;
}

void HumanB::attack()
{
	std::cout << _name << " attacks with their " << _wepon.getType() << std::endl;
}

HumanB::~HumanB()
{

	std::cout << "end the HumanB" <<std::endl;

}
