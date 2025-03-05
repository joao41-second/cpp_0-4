/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:42:04 by jperpct           #+#    #+#             */
/*   Updated: 2025/03/05 10:42:06 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int  main(int argv,char ** argc)
{

	if(argv != 2)
	{
		std::cout << "number the argoments not valid" << std::endl;
		return 1 ;
	}
	Harl start = Harl(argc[1]);
	start.complain("ERROR");

	start.complain("WARNING");

	start.complain("INFO");

	start.complain("DEBUG");





	
}
