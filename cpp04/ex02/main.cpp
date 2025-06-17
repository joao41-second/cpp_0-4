/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:46:00 by jperpct           #+#    #+#             */
/*   Updated: 2025/06/16 12:09:33 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"
#include "WorngAnimal.hpp"
#include "WorngCat.hpp"
#include "Cat.hpp"
#include <iostream>
#include <iterator>


int main()
{
	//const Animal * meta = new Animal();
	const Animal * j = new Dog();
	const Animal * i = new Cat();

	//const WorngAnimal *er = new WorngCat();
	
	std::cout << j->get_Type() << " "<< std::endl;
	std::cout << i->get_Type() << "  "<<  std::endl;
	//std::cout << meta->get_Type() << " "<<  std::endl;

	j->makeSound();
	i->makeSound();
	//meta->makeSound(); 
	//er->makeSound();


	i->set_ideas(5,"ola miao");
	

	//std::cout << " Animal" << meta->get_ideas(5) << std::endl;
	std::cout << " cat " << i->get_ideas(5) << std::endl;


//	delete er;
	//delete meta;
	delete j;
	delete i;

}
