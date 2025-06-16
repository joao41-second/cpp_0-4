/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:08:04 by jperpct           #+#    #+#             */
/*   Updated: 2025/06/16 11:46:30 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN
#define BRAIN 

#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(Brain &copy);
		~Brain();
		Brain & operator =(Brain & copy);
		void set_ideas(int index, std::string idea) ;
		std::string get_ideas(int index);
};

#endif
