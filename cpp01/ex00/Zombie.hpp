/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:21:00 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/27 12:07:11 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CPP
#define ZOMBIE_CPP

#include <iostream>

class Zombie 
{
	private:
	 std::string _name;
	public:
	 Zombie(std::string);
	 void announce( void );
	 ~Zombie();
};


 #endif // !ZOMBIE_CPP ZOMBIE_CPP


