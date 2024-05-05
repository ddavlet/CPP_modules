/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:32:23 by ddavlety          #+#    #+#             */
/*   Updated: 2024/05/05 17:28:02 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point	triangle[3] = {
		Point (10.001f, 0),
		Point (0, 0),
		Point (5, 5)

	};
	Point	point1(5, 1);
	Point	point2(10, 0);
	Point	point3(10.001f, 0);

	std::cout << bsp(triangle[0], triangle[1], triangle[2], point1) << std::endl;
	std::cout << bsp(triangle[0], triangle[1], triangle[2], point2) << std::endl;
	std::cout << bsp(triangle[0], triangle[1], triangle[2], point3) << std::endl;
	return 0;
}
