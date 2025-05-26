/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:11:52 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/26 11:54:26 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"


Brain::Brain()
{
	for(int i = 0;  i < 100 ;i++)
	{
		_str[i] = "not seted";
	}
	std::cout << "start the memory"<< std::endl;
}


Brain::Brain(Brain &copy)
{
	*this = copy;
	std::cout << "copy of the memory"<< std::endl;
}


Brain &Brain::operator=(Brain &value)
{
	for(int i = 0;  i < 100 ;i++)
	{
		_str[i] = value._str[i];
	}
	std::cout << "iqual operator"<< std::endl;	
	return (*this);
}

Brain::~Brain()
{
	std::cout << "end memory"<< std::endl;	
}


std::string Brain::get_memory(int index)
{
	if(index < 100)
		return (this->_str[index]);
	return ("not index");
}


void Brain::set_memory(int index , std::string str)
{	
	if(index < 100)
		this->_str[index] = str;
}
