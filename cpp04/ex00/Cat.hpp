/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:30:52 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/23 12:45:41 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat &copy);
		~Cat();
		Cat & operator=(Cat &var);
		void makeSound();

};

#endif
