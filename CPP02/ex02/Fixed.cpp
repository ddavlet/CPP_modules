/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:30:53 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/15 10:53:08 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _rawValue(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int integer)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_rawValue = (integer << Fixed::_Fractionalbits);
}

Fixed::Fixed(const float number)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_rawValue = roundf(number * (1 << Fixed::_Fractionalbits));
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->setRawBits(obj.getRawBits());
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_rawValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawValue = raw;
}

int	Fixed::toInt(void) const
{
	return (this->_rawValue >> Fixed::_Fractionalbits);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_rawValue) / (1 << Fixed::_Fractionalbits));
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

bool Fixed::operator>(const Fixed& obj)
{
	return (this->toFloat() > obj.toFloat());
}

bool Fixed::operator<(const Fixed& obj)
{
	return (this->toFloat() < obj.toFloat());
}

bool Fixed::operator>=(const Fixed& obj)
{
	return (this->toFloat() >= obj.toFloat());
}

bool Fixed::operator<=(const Fixed& obj)
{
	return (this->toFloat() <= obj.toFloat());
}

bool Fixed::operator==(const Fixed& obj)
{
	return (this->toFloat() == obj.toFloat());
}

bool Fixed::operator!=(const Fixed& obj)
{
	return (this->toFloat() != obj.toFloat());
}

Fixed	Fixed::operator+(const Fixed& obj)
{
	float	value = this->toFloat() + obj.toFloat();
	return (Fixed (value));
}

Fixed	Fixed::operator-(const Fixed& obj)
{
	float	value = this->toFloat() - obj.toFloat();
	return (Fixed (value));
}

Fixed	Fixed::operator*(const Fixed& obj)
{
	float	value = this->toFloat() * obj.toFloat();
	return (Fixed (value));
}

Fixed	Fixed::operator/(const Fixed& obj)
{
	float	value = this->toFloat() / obj.toFloat();
	return (Fixed (value));
}

Fixed&	Fixed::operator++()
{
	this->_rawValue++;
	return *this;
}

Fixed&	Fixed::operator--()
{
	this->_rawValue--;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed new_F(this->toFloat());
	this->_rawValue++;
	return new_F;
}

Fixed	Fixed::operator--(int)
{
	Fixed new_F(this->toFloat());
	this->_rawValue--;
	return new_F;
}

const Fixed& Fixed::min(const Fixed& obj_1, const Fixed& obj_2)
{
	return (obj_1.toFloat() < obj_2.toFloat()) ? obj_1 : obj_2;
}

const Fixed& Fixed::min(Fixed& obj_1, Fixed& obj_2)
{
	return (obj_1.toFloat() < obj_2.toFloat()) ? obj_1 : obj_2;
}

const Fixed& Fixed::max(const Fixed& obj_1, const Fixed& obj_2)
{
	return (obj_1.toFloat() > obj_2.toFloat()) ? obj_1 : obj_2;
}

const Fixed& Fixed::max(Fixed& obj_1, Fixed& obj_2)
{
	return (obj_1.toFloat() > obj_2.toFloat()) ? obj_1 : obj_2;
}
