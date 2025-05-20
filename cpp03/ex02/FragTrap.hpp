/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:04:08 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/20 18:17:20 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	private:
		std::string 	_name;
		int 	_points_hit;
		int 	_points_energy;
		int 	_points_attack;
	
	protected:
		static const int energy = 100;
		static const int hit = 100;
		static const int atack = 30;
	public:
		FragTrap(std::string str);	
		FragTrap(FragTrap &other);
		~FragTrap();
		FragTrap &operator = (FragTrap &other);
		void highFivesGuys();
		std::string get_name();
	
};

#endif
