/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:32:10 by jperpct           #+#    #+#             */
/*   Updated: 2025/06/16 11:57:25 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{

	private:
		Brain *_brain;	
	public:
		Dog();
		Dog(Dog &copy);
		~Dog();
		Dog & operator=(Dog &var);
		void makeSound() const ;
		void set_ideas(int idex,std::string str) const;
		std::string get_ideas(int idex) const;


};

#endif
