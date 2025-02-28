/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:45:53 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/28 18:49:52 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <fstream>
#include <iostream>
#include <fstream>
#include <string>



int main(int argv , char **argc)
{
	std::ifstream file; // this file is possible read 
	std::ofstream file_new; // this file not possible read
	std::string	  new_file_name;
	std::string	str_;
	std::string buff;
	int locate;

	if(argv == 4)
	{
		file.open((std::string)argc[1]);
		if(file.is_open() == false)
		{
			std::cout << "error in open the file" << std::endl;
			return 1;
		}
		new_file_name = (std::string)argc[1] + ".replace";
		file.open(new_file_name);
		str_ =(std::string) argc[3];
		while ( getline(file,buff) )
		{
		 locate = buff.find((std::string)argc[2]);
		new_file_name << buff.replace(locate,str_.size, str_);
		}

		//std::cout << str.find("estou");

		//std::cout << str.replace(10,5,"aaaaa");
		
		file.close();
	}
	else
		std::cout << "error in argomesnt";	
}
