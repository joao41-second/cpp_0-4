/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:30:52 by jperpct           #+#    #+#             */
/*   Updated: 2025/06/16 12:07:59 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
	private:
		  Brain *_brain;	
	public:
		Cat();
		Cat(Cat &copy);
		~Cat();
		Cat & operator=(Cat &var);
		void makeSound() const ;
		void set_ideas(int idex,std::string str) const;
		std::string get_ideas(int idex) const;

};

#endif
