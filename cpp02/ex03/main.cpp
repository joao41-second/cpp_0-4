/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 09:55:01 by jperpct           #+#    #+#             */
/*   Updated: 2025/03/08 09:55:33 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include "Point.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	
	
	std::cout << bsp(Point(1,2), Point(1,4), Point(3,4), Point(-1,2)) << std::endl;

	std::cout << bsp(Point(1,2), Point(1,4), Point(3,4), Point(1,2)) << std::endl;

	std::cout << bsp(Point(1,2), Point(1,4), Point(3,4), Point(1,21)) << std::endl;

	


	return 0;
}
