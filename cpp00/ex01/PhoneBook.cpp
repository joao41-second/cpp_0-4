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
#include <cstdlib>
#include <iostream>
#include <string>
#include "PhoneBook.hpp"


void PhoneBook::set_new ()
{
	static int nb;
	if( contat[nb].set_new_contact() == 1)
		return;
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
	e = std::atoi(nb.c_str());
	if(nb.empty()||std::cin.eof() == 1)
	{
		std::cout << "not number valid" << std::endl;

		std::cin.clear();
		return;
	}

	if( e <= 8 && e > 0 )
		contat[e-1].print_contact();
	else 
		std::cout << "not number valid" << std::endl;
	
	std::cin.clear();
}

void::PhoneBook::chets()
{
	int i = -1;
	while (++i != 8)
	{
		contat[i].sd_contact();
	}
}
