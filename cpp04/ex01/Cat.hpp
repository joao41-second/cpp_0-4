/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:30:52 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/26 11:59:37 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
	private:
		Brain * _mybaind;		
	public:
		Cat();
		Cat(Cat &copy);
		~Cat();
		Cat & operator=(Cat &var);
		void makeSound() const;
		void set_memory(int index , std::string std);
		std::string get_memory(int index);

};

#endif
