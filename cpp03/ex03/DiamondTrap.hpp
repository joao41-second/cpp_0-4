/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:34:48 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/20 20:07:41 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <cstring>
#include <string>

class DiamondTrap : public FragTrap , public ScavTrap
{
	private:
		std::string _name;
	
	public:
		DiamondTrap( std::string _name);
		DiamondTrap(DiamondTrap &other);
		DiamondTrap &operator=(DiamondTrap &other);
		~DiamondTrap();
		std::string get_name();
		void whoAmI();
};
#endif
