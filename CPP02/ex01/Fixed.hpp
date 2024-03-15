/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:30:41 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/14 13:34:33 by ddavlety         ###   ########.fr       */
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
private:
	int	_rawValue;
	static const int _Fractionalbits = 8;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif
