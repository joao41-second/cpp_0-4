/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 20:30:36 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/19 21:40:38 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point():_x(0),_y(0)
{};

Point::Point(Fixed x,Fixed y):_x(x),_y(y)
{};

Point::Point(const Point &point)
{
	*this = point;
}

Point::~Point()
{
}


Point &Point::operator=(const Point &point)
{
	(void) point;
	this->_x = point._x;
	this->_y = point._y;
	return(*this);
}

Fixed const &Point::get_x() const
{
	return (this->_x);
}

Fixed const &Point::get_y() const
{
	return (this->_y);
}

