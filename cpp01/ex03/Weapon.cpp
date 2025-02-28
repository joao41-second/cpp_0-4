/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:47:00 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/28 17:27:59 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

std::string Weapon::getType()
{
	return(_type);
}

void Weapon::setType(std::string std)
{
	_type = std;
}

Weapon::Weapon(std::string std)
{
	_type = std;
	std::cout << "new Weapon" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "end Weapon" << std::endl;
}
