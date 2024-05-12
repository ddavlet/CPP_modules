/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:03:04 by ddavlety          #+#    #+#             */
/*   Updated: 2024/05/08 16:12:11 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::~Point()
{
}

Point::Point(float const x,float const y) : _x(x), _y(y)
{
}

Point::Point(const Point& obj) : _x(obj.get_x()), _y(obj.get_y())
{
}

Fixed const	Point::get_x() const
{
	return (this->_x);
}

Fixed const	Point::get_y() const
{
	return (this->_y);
}

Point& Point::operator=(const Point& obj)
{
	if (this != &obj)
		*this = Point(obj._x.toFloat(), obj._y.toFloat());

	return *this;
}
