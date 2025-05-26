/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:46:00 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/23 14:06:39 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"

#include "Cat.hpp"
#include <iostream>
#include <iterator>


int main()
{
	const Animal * meta = new Animal();

	const Animal * j = new Dog();

	const Animal * i = new Cat();
	
	std::cout << j->get_Type() << "oi"<< std::endl;

	std::cout << i->get_Type() << "oi "<<  std::endl;

	std::cout << meta->get_Type() << "oi "<<  std::endl;


}
