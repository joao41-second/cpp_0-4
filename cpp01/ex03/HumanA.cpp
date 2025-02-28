/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:00:19 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/28 16:29:15 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name,wepon * Wepon)
{
	std::cout << "create the HumanA" <<std::endl;
	_name = name;
	_wepon = Wepon;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _wepon->getType() << std::endl;
}


HumanA::~HumanA()
{

	std::cout << "end the HumanA" <<std::endl;

}
