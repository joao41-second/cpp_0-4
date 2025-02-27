/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:51:53 by jperpct           #+#    #+#             */
/*   Updated: 2025/02/27 17:04:27 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string	 &stringREF = str;
	
	stringPTR = &str;


	std::cout << "pint the address" << std::endl;
	std::cout << "the str"<< &str << std::endl;
	std::cout << "pointer to str" << &stringPTR << std::endl;

	std::cout << "refece tho str" << &stringREF << std::endl;

	std::cout << "pint the value" << std::endl	;
	std::cout << "the str"<< str << std::endl;

	std::cout << "pointer to str" << stringPTR << std::endl;

	std::cout << "refece tho str" << stringREF << std::endl;




		
	
}
