/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:15:04 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/23 12:39:07 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

#include <string>
class Animal 
{
	protected:
		std::string _string;
	public:
		Animal(std::string string);
		Animal();
		Animal(Animal &copy);
		~Animal();
		Animal & operator=(Animal &var);
		std::string get_Type() const;
};
#endif
