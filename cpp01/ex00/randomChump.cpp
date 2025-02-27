/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:54:12 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/27 12:08:22 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

void randomChump( std::string name )
{
  Zombie* zomb = new Zombie( name);
	zomb->announce();
	delete zomb;
}
