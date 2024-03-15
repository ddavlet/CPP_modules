/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:04:00 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/15 12:15:25 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

class Point
{
public:
	Point(void);
	~Point(void);
	Point(const Point& point);
	Point		operator=(const Point& obj);
	Point(const float x, const float y);
	float	get_x(void) const;
	float	get_y(void) const;
private:
	const float _x;
	const float _y;
};

#endif
