/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:57:25 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/28 16:11:18 by jperpct          ###   ########.fr       */
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
	wepon _wepon;
 public:
	HumanB(std::string);
	void setWepon(wepon);
	void attack();
	~HumanB();
};

#endif // !HUMANA_HPP

