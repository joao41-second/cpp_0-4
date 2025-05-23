/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:32:10 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/23 12:44:37 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog &copy);
		~Dog();
		Dog & operator=(Dog &var);
		void makeSound();

};

#endif
