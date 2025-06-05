/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 08:58:05 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/28 08:58:06 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>

int Contact::set_new_contact ()
{
	phonenumber = -1;
	
	if(std::cin.eof() == 1)
		return(this->sd_contact(),1);
	std::cin.clear();
	std::cout  <<"the first name" << std::endl;
	std::getline(std::cin,first_name);
	if( first_name.empty()|| std::cin.eof() == 1)
		return(this->sd_contact(),1);
	std::cin.clear();
	std::cout << "the last name" << std::endl;
	if( std::cin.eof() == 1)
		return(this->sd_contact(),1);
	std::cin.clear();
	std::getline(std::cin,last_name);
	if( last_name.empty()||std::cin.eof() == 1)
		return(this->sd_contact(),1);
	std::cin.clear();
	std::cout << "the nickname"<< std::endl;
	if(std::cin.eof() == 1)
		return(this->sd_contact(),1);
	std::getline(std::cin,nickname);
	if( nickname.empty()||std::cin.eof() == 1)
		return(this->sd_contact()),1;
	std::cin.clear();
	std::cout << "the phonenumber"<< std::endl;
	std::getline(std::cin,phonenumber);
	if(phonenumber.empty()||std::cin.eof() == 1)
		return(sd_contact()),1;
	std::cin.clear();
	std::cout << "the darkest secret"<< std::endl;
	std::getline(std::cin,darkest);
	if(darkest.empty()||std::cin.eof() == 1)
		return(this->sd_contact(),1);
	return (0);
}

void Contact::print_contact()
{
	std::cout << " the first name" << std::endl;
	std::cout << first_name;
	std::cout << " the last name" << std::endl;
	std::cout << last_name;
	std::cout << " the nickname"<< std::endl;
	std::cout << nickname;
	std::cout << " the phonenumber"<< std::endl;
	std::cout << phonenumber;
	std::cout << " the darkest secret"<< std::endl;
	std::cout << darkest;
	std::cout<< " end of the form" << std::endl;
}

std::string Contact::set_the_string(std::string chek)
{
	std::string dup = chek;
	if(dup.size() >= 10)
	{
		dup[9]='.';
		dup.resize(10);
	}
	else 
	{
		std::cout << std::string(10-dup.size(),' ');
	}
	return (dup);
}

void Contact::print_contact_line(int index)
{
	if(first_name != "\0" && last_name != "\0" && nickname != "\0" && phonenumber != "\0" && darkest != "\0")
	{
		std::cout << std::string(9,' ') << index+1 << "|";
		std::cout << set_the_string(first_name) << "|";
		std::cout << set_the_string(last_name) << "|";
		std::cout << set_the_string(nickname) << "|" <<std::endl;
	}
}

void Contact::sd_contact()
{
	 first_name = "ol";
	 last_name = "ol";
	 nickname = "ol";
	 phonenumber = "99";
	 darkest = "ol";
}
