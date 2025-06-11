/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:52:37 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/16 16:37:37 by jperpct          ###   ########.fr       */
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

	// construc defult
	 Fixed();

	 // distucter
	 ~Fixed();

	 // copy construc
	 Fixed(const Fixed &other);
	
	 // atribut operator

	 Fixed &operator=(const Fixed &src);

	 Fixed(const int new_vaule);

	 Fixed(const float new_vaule);

	 int getRawBits() const;

	 void setRawBits(int new_vaule);

	 int toInt(void) const;

	 float toFloat(void) const;

};


std::ostream &operator<<(std::ostream &o, Fixed const &fixed);





#endif
