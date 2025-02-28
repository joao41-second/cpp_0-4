/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:47:00 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/28 16:17:58 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

std::string wepon::getType()
{
	return(_type);
}

void wepon::setType(std::string std)
{
	_type = std;
}

wepon::wepon(std::string std)
{
	_type = std;
	std::cout << "new wepon" << std::endl;
}

wepon::~wepon()
{
	std::cout << "end wepon" << std::endl;
}
