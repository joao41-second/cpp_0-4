/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:15:04 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/26 12:13:31 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal 
{
	protected:
		std::string _string;
	public:
		Animal(std::string string);
		Animal();
		Animal(Animal &copy);
		virtual ~Animal();
		Animal & operator=(Animal &var);
		std::string get_Type() const;
};
#endif


