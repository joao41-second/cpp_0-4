/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:59:18 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/27 16:13:40 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name);

int main()
{

	Zombie* osvaldo = new Zombie;
	osvaldo->set_name("osvaldo");
	Zombie* order =  zombieHorde(10, "neurro");

	int i=-1;
	while (++i < 10) 
	{
		order[i].announce();
	}
	i = -1;
	delete  [] order;
	osvaldo->announce();
	
	delete osvaldo;
}
