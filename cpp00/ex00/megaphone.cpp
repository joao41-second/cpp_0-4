/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 08:58:25 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/28 08:58:26 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc,char **argv)
{
	int i;
	int d;
	//std::cout << std::toupper( "ola mnudo");
	std::string ola = "ola mundo";
	d = 0;
	if(argc != 1)
	{
		while(++d < argc)
		{

			i = -1;
			while (argv[d][++i] != '\0')
			{
			std::cout << (char)std::toupper(argv[d][i]);
			}
		}
		std::cout << std::endl; //"\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}
