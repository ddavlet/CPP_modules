/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:48:45 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/23 20:31:27 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria () {
	std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria (const AMateria& src) {
	type = src.type;
	std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria (std::string const &type) : type(type) {
	std::cout << "AMateria constructor" << std::endl;
}

AMateria::~AMateria () {
	std::cout << "AMateria destructor" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& src) {
	if (this != &src)
	{
		delete (this);
		*this = src;
	}
	return *this;
}

std::string const& AMateria::getType() const {
	return type;
}

