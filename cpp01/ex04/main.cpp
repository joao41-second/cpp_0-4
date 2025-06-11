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
	std::string argc1;
	std::string argc2;
	int len;

	if(argv == 4)
	{
		argc1 = argc[1];
		argc2 = argc[2];
		file.open(argc[1]);
		if(file.is_open() == false)
		{
			std::cout << "error in open the file" << std::endl;
			return 1;
		}
		new_file_name = argc1 + ".replace";
		file_new.open(new_file_name.c_str());
		if(file_new.is_open() == false)
		{
			std::cout << "error in open the file" << std::endl;
			return 1;
		}
		str_ =(std::string) argc[3];

			len = argc2.length();

		while ( getline(file,buff , '\n'))
		{
		 locate = buff.find((std::string)argc[2]);
		 if(locate != -1)
		 {
			 buff.replace(locate,len, "") ;
			 file_new <<  buff.insert(locate,str_) << std::endl;
		 }
		 else 
			file_new << buff << std::endl; 
		}	
		file.close();
	}
	else
		std::cout << "error in argomesnt";	
}
