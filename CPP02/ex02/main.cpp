/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:43:26 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/15 10:59:17 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed	a;
	Fixed	const b(Fixed(5.05f) * Fixed(2));
	Fixed	c(Fixed(5.05f) * Fixed(2) / Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << c << std::endl;
	std::cout << (a > c) << std::endl;
	std::cout << (a < c) << std::endl;
	std::cout << (a >= c) << std::endl;
	std::cout << (a <= c) << std::endl;
	std::cout << (a == c) << std::endl;
	std::cout << (a != c) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	return 0;
}
