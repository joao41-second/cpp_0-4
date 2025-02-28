/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:40:15 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/28 17:30:03 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA 
{
 private:
	std::string _name;
	Weapon &_Weapon; 
public:
	HumanA(std::string ,Weapon & );
	void attack();
	~HumanA();
};

#endif // !HUMANA_HPP

