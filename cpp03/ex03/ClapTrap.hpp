/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:08:39 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/20 14:35:52 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_H
#define  CLAPTRAP_H
#include <iostream>


class ClapTrap 
{
	private:
		static const int energy = 10;
		static const int hit = 10;
		static const int atack = 0;
		
	protected:
		std::string 	_name;
		int 	_points_hit;
		int 	_points_energy;
		int 	_points_attack;
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &copy);
		~ClapTrap();
		ClapTrap &operator=(ClapTrap &other);
 		void attack(const std::string& target);
 		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string get_name();
		void status();

};

#endif




