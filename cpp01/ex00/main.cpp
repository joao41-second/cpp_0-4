/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:59:18 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/27 12:08:42 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


Zombie* newZombie( std::string name );

void randomChump( std::string name );

int main()
{

	Zombie* osvaldo = newZombie("osvaldo");

	randomChump("envrton");


	osvaldo->announce();
	
	delete osvaldo;
}
