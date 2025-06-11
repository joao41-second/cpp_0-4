/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:00:19 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/28 17:32:46 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name,Weapon& Weapon): _Weapon(Weapon)
{
	_name = name;
	std::cout << "create the HumanA" <<std::endl;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _Weapon.getType() << std::endl;
}


HumanA::~HumanA()
{

	std::cout << "end the HumanA" <<std::endl;

}
