/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:57:25 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/28 17:36:13 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <chrono>
#include <iostream>

class HumanB 
{
 private:
	std::string _name;
	Weapon *_Weapon;
 public:
	HumanB(std::string);
	void setWeapon(Weapon &);
	void attack();
	~HumanB();
};

#endif // !HUMANA_HPP

