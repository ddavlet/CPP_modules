/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:30:41 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/15 10:36:23 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed& obj);
	Fixed(const int integer);
	Fixed(const float number);
	Fixed&		operator=(const Fixed& obj);
	int			getRawBits( void ) const;
	void		setRawBits( int const raw );
	float		toFloat(void) const;
	int			toInt(void) const;
	bool		operator>(const Fixed& obj);
	bool		operator<(const Fixed& obj);
	bool		operator>=(const Fixed& obj);
	bool		operator<=(const Fixed& obj);
	bool		operator==(const Fixed& obj);
	bool		operator!=(const Fixed& obj);
	Fixed		operator+(const Fixed& obj);
	Fixed		operator-(const Fixed& obj);
	Fixed		operator*(const Fixed& obj);
	Fixed		operator/(const Fixed& obj);
	Fixed&		operator++(void);
	Fixed&		operator--(void);
	Fixed		operator++(int);
	Fixed		operator--(int);
	static const Fixed& min(Fixed& obj_1, Fixed& obj_2);
	static const Fixed& min(const Fixed& obj_1, const Fixed& obj_2);
	static const Fixed& max(Fixed& obj_1, Fixed& obj_2);
	static const Fixed& max(const Fixed& obj_1, const Fixed& obj_2);

private:
	int	_rawValue;
	static const int _Fractionalbits = 8;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif
