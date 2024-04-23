/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:48:45 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/23 17:29:51 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria () {
	std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria (std::string const &type) : type(type) {
	std::cout << "AMateria constructor" << std::endl;
}

AMateria::~AMateria () {
	std::cout << "AMateria destructor" << std::endl;
}

const AMateria& AMateria::operator=(const AMateria& src) {
	if (this == &src)
		return *this;
	else
	{
		delete (this);
		return src;
	}
}

std::string const& AMateria::getType() const {
	return type;
}

