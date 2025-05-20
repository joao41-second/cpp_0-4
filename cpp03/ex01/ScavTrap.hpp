/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:27:25 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/20 15:24:53 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef SCAVTRA_H
#define SCAVTRA_H
#include "ClapTrap.hpp"
#include <string>


class ScavTrap : public ClapTrap 
{
	private:
		std::string 	_name;
		int 	_points_hit;
		int 	_points_energy;
		int 	_points_attack;
	
	protected:
		static const int energy = 50;
		static const int hit = 100;
		static const int atack = 20;
	public:
		ScavTrap(std::string str);	
		ScavTrap(ScavTrap &other);
		~ScavTrap();
		ScavTrap &operator = (ScavTrap &other);
		void attack(std::string name);
		void guardGate();
	
};

#endif
