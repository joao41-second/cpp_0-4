/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:46:40 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/27 16:12:49 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) 
{
	if(N < 1)
		std::cout << "the number not valid";
	else
	{
		Zombie *Nb_z;
		Nb_z = new Zombie[N];
		int i = -1;
		while(++i < N)
		{
			 Nb_z[i].set_name(name);
		}
		return Nb_z;
	}
	return NULL;
}



