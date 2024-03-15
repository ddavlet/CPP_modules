/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:11:58 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/15 12:32:42 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <cmath>

float	triangle_area(Point const a, Point const b, Point const c)
{
	return std::abs(((((a.get_x() * (b.get_y() - c.get_y()))
			+ (b.get_x() * (c.get_y() - a.get_y()))
			+ (c.get_x() * (a.get_y() - b.get_y()))) / 2)));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float main_area = triangle_area(a, b, c);
	float	area_1 = triangle_area(point, a, b);
	float	area_2 = triangle_area(point, b, c);
	float	area_3 = triangle_area(point, a, c);

	if (main_area == (area_1 + area_2 + area_3)) {
		if (!area_1 || !area_2 || !area_3)
			return false;
		else
			return true;
	} else {
		return false;
	}
}
