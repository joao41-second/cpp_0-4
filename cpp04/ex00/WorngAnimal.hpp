/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WorngAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:38:56 by jperpct           #+#    #+#             */
/*   Updated: 2025/06/16 11:01:19 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WORNGANIMAL_HPP
#define WORNGANIMAL_HPP
#include <iostream>

#include <string>
class WorngAnimal
{
	protected:
		std::string _string;
	public:
		WorngAnimal(std::string string);
		WorngAnimal();
		WorngAnimal(WorngAnimal &copy);
	 	~WorngAnimal();
		virtual WorngAnimal & operator=(WorngAnimal &var);
		virtual std::string get_Type() const;
		void makeSound() const;
};
#endif
