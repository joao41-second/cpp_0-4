/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 09:35:32 by jperpct           #+#    #+#             */
/*   Updated: 2025/03/08 09:59:21 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private :
		int _vaule;
		static const int _fract;
	public:
	 Fixed();
	 ~Fixed();
	 Fixed( Fixed &other);
	 Fixed	& operator = ( Fixed &other);
	 int getRawBits();
	 void setRawBits(int new_vaule);

};


#endif
