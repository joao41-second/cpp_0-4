/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:46:00 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/26 12:01:58 by jperpct          ###   ########.fr       */
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
	
	
	 Cat * cat = new Cat();

	cat->makeSound();

	std::cout <<  cat->get_memory(10) << std::endl;
	
	cat->set_memory(10, "i am the king");
	std::cout <<  cat->get_memory(10) << std::endl;
	
	
	delete cat;
	delete meta;
	delete j;
	delete i;

}
