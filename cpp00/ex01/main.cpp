/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 08:58:54 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/28 08:58:56 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>


int main(void)
{
	PhoneBook ok;
	std::string line;
	ok.chets();

	std::cout << " Start ofthe PhoneBook :" << std::endl;
	while (line != "EXIT")
	{
		std::getline(std::cin,line);

		if(line == "ADD")
			ok.set_new();
		if(line == "SEARCH")
			ok.print_contact(-1);	
		std::cout << "prompt:" << std::endl;
	}
	
}
