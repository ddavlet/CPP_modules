/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:11:58 by ddavlety          #+#    #+#             */
/*   Updated: 2024/05/05 17:36:36 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <cmath>

float	triangle_area(Point const a, Point const b, Point const c)
{
	return std::abs(((((a.get_x().toFloat() * (b.get_y().toFloat() - c.get_y().toFloat()))
			+ (b.get_x().toFloat() * (c.get_y().toFloat() - a.get_y().toFloat()))
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
