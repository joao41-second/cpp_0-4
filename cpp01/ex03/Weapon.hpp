/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:42:09 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/28 17:28:09 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Weapon_HPP
#define Weapon_HPP

#include <iostream>

class Weapon
{
  private: 
	std::string _type;
  public:
	Weapon(std::string);
	void setType(std::string);
	std::string getType();
	~Weapon();

};

#endif // !Weapon_HPP

