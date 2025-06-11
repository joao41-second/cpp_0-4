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

#define PRINT 0
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


	 Fixed(const int new_vaule);

	 Fixed(const float new_vaule);

	 int getRawBits() const;

	 void setRawBits(int new_vaule);

	 int toInt(void) const;

	 float toFloat(void) const;

	 Fixed &operator=( Fixed const  &src);

	 bool operator < (Fixed const &other)const;
	 bool operator > (Fixed const &other)const;
	 bool operator >= (Fixed const &other)const;
	 bool operator <= (Fixed const &other)const;
	 bool operator == (Fixed const &other)const;
	 bool operator != (Fixed const &other)const;
	 
	 Fixed operator * (Fixed const &other)const;
	 Fixed operator - (Fixed const &other)const;
	 Fixed operator + (Fixed const &other)const;
	 Fixed operator / (Fixed const &other)const;

	 Fixed& operator++();
	 Fixed operator++(int);
	 Fixed& operator--();
	 Fixed operator--(int);


	const static Fixed &min(Fixed const &a,Fixed const &b);

	const static Fixed &max(Fixed const &a,Fixed const &b);
};


std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

Fixed const &max(Fixed const &a, Fixed const &b);

Fixed const &min(Fixed const &a, Fixed const &b);




#endif
