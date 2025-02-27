/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:20:50 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/27 11:48:43 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name <<": Created Zombie" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name <<": End Zombie" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

