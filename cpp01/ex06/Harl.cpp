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
#include <iterator>

void Harl::info()
{

	std::cout << "info the funtion" << std::endl;

}

void Harl::debug()
{

	std::cout << "info the debug" << std::endl;

}

void Harl::warning()
{

	std::cout << "info the warning" << std:: endl;

}

void Harl::error()
{

	std::cout << "info the error" << std::endl;

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
			if(_flag <= i)
				(this->*func[i])();
			return;
		}
	}
	std::cout << "not error set error"<< std::endl;
}

Harl::Harl(std::string status)
{

	std::string level_worning[4] = { "DEBUG" ,"INFO","WARNING","ERROR"};

	int i = -1;
	while (++i < 4) 
	{
		if(level_worning[i] == status)
		{
			_flag = i;
			return;
		}
	}
	std::cout << "not error set filter"<< std::endl;
	Harl::_flag = 4;
}

Harl::~Harl()
{
}
