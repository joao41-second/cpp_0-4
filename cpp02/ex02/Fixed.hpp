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
		static int _fract;
	public:

	// construc defult
	 Fixed();

	 // distucter
	 ~Fixed();

	 // copy construc
	 Fixed(const Fixed &other);
	
	 // atribut operator


	 Fixed(const int new_vaule);

	 Fixed(const float new_vaule);

	 int getRawBits() const;

	 void setRawBits(int new_vaule);

	 int toInt(void) const;

	 float toFloat(void) const;

	 Fixed &operator=( Fixed const  &src);

	 Fixed operator * (Fixed const &otre)const;
};


std::ostream &operator<<(std::ostream &o, Fixed const &fixed);





#endif
