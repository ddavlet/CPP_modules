/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:03:04 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/15 12:15:14 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::~Point()
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(const Point& obj) : _x(obj.get_x()), _y(obj.get_y())
{
}

float	Point::get_x() const
{
	return (this->_x);
}

float	Point::get_y() const
{
	return (this->_y);
}

Point Point::operator=(const Point& obj)
{
	if (this != &obj)
		return Point(obj.get_x(), obj.get_y());
	else
		return *this;
}
