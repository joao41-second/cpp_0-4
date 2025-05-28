/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 08:58:41 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/28 08:58:42 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cstdio>
#include <iostream>
#include <string>
#include "PhoneBook.hpp"


void PhoneBook::set_new ()
{
	static int nb;
	 contat[nb].set_new_contact();
	if (nb == 7)
		nb = -1;
	nb++;
}

void PhoneBook::print_contact (int i)
{
	int e;
	std::string nb;
	e = -1;
	if(i == -1)
	{
		while(++e != 8)
		{
			contat[e].print_contact_line(e);
		}
	}
	std::getline(std::cin,nb);
	if(std::cin.fail() && std::stoi(nb) <= 8 && std::stoi(nb)> -1)
		contat[std::stoi(nb)].print_contact();
	else 
		std::cout << "not number valid" << std::endl;
}

void::PhoneBook::chets()
{
	int i = -1;
	while (i++ != 7)
	{
		contat[i].sd_contact();
	}
}
