/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:16:57 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/26 11:29:52 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP


#include "iostream"

class	Brain
{
	private:
		std::string _str[100];
	public:
		Brain();
		Brain( Brain &copy);
		~Brain();
		Brain &operator=(Brain &value);
		std::string get_memory(int index);
		void set_memory(int index,std::string memoty);
	protected:
};


#endif
