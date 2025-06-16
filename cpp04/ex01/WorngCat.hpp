/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WorngCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:49:35 by jperpct           #+#    #+#             */
/*   Updated: 2025/06/16 10:59:36 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  WORNGCAT_HPP
#define WORNGCAT_HPP
#include "WorngAnimal.hpp"
#include <iostream>

class WorngCat : public WorngAnimal
{
	public:
		WorngCat();
		WorngCat(WorngCat &copy);
		~WorngCat();
		WorngCat & operator=(WorngCat &var);
		void makeSound() const ;

};

#endif
