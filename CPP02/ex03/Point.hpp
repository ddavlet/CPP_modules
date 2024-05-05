/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:04:00 by ddavlety          #+#    #+#             */
/*   Updated: 2024/05/05 17:27:14 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H
# include "Fixed.hpp"

class Point
{
public:
	Point(void);
	~Point(void);
	Point(const Point& point);
	Point&		operator=(const Point& obj);
	Point(float const x, float const y);
	Fixed const	get_x(void) const;
	Fixed const	get_y(void) const;
private:
	Fixed const _x;
	Fixed const _y;
};

#endif
