/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:12:17 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/28 17:38:41 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include "HumanA.hpp"

int main()
{
	Weapon nife =  Weapon("hello i am nife");

	Weapon pistol =  Weapon("bommm");
	
	HumanA bob =  HumanA("bob",nife);
	HumanB kill = HumanB("kill");
	kill.setWeapon(pistol);

	bob.attack();
	kill.attack();
}
