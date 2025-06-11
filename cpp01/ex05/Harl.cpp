/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:42:31 by jperpct           #+#    #+#             */
/*   Updated: 2025/03/05 10:42:38 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::info()
{
	std::cout << "info the funtion:" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;

}

void Harl::debug()
{

	std::cout << "info the debug:" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;

}

void Harl::warning()
{

	std::cout << "info the warning:" << std:: endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{

	std::cout << "info the error" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

}

void Harl::complain(std::string std)
{
	std::string level_worning[4] = { "DEBUG" ,"INFO","WARNING","ERROR"};
	void (Harl::*func[4])()= { &Harl::debug,&Harl::info,&Harl::warning,&Harl::error};

	int i = -1;
	while (++i < 4) 
	{
		if(level_worning[i] == std)
		{
			(this->*func[i])();
			return;
		}
	}
	std::cout << "not error set";
}



