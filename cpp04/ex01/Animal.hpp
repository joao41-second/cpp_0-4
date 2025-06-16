/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:15:04 by jperpct           #+#    #+#             */
/*   Updated: 2025/06/16 12:02:43 by jperpct          ###   ########.fr       */
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
		virtual ~Animal();
		virtual Animal & operator=(Animal &var);
		virtual std::string get_Type() const;
		virtual void makeSound() const;
		virtual std::string get_ideas(int index) const;
		virtual void set_ideas(int inex,std::string str) const ;

};
#endif
