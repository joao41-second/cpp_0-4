/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpct <jperpect@student.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 20:23:48 by jperpct           #+#    #+#             */
/*   Updated: 2025/05/19 21:38:32 by jperpct          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
#define  POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed _x;
		Fixed _y;
	public:
		Point();
		Point(Fixed x, Fixed y);
		Point(const Point &point);
		~Point();
		Point &operator =(Point const &point);

		Fixed const &get_x() const;
		Fixed const &get_y() const;


};


bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif
