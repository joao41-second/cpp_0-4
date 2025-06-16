/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:14:40 by jperpct           #+#    #+#             */
/*   Updated: 2025/06/16 11:46:17 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "start Brain" << std::endl;
}

Brain::Brain(Brain & copy)
{

	std::cout << "copy Brain" << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "end Brain" << std::endl;
}

Brain & Brain::operator = (Brain &copy)
{
	int i;
	i = -1;
	while(++i < 100)
	{
		this->_ideas[i] = copy._ideas[i];
	}
	return(*this);
}


void Brain::set_ideas(int index, std::string idea) 
{
	this->_ideas[index] = idea;
}


std::string Brain::get_ideas(int index)
{
	return this->_ideas[index];
}

