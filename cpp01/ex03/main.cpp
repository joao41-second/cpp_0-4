/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:12:17 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/28 16:32:12 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

int main()
{
		wepon *nife = new wepon("hello i am nife");
		
		HumanA bob =  HumanA("bob",nife);

	bob.attack();
}
