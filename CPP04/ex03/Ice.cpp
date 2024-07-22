/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:33:46 by ddavlety          #+#    #+#             */
/*   Updated: 2024/07/22 13:19:25 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice () : AMateria("ice") {
	std::cout << "Ice default constructor" << std::endl;
}

Ice::~Ice () {
	std::cout << "Ice destructor" << std::endl;
}

Ice::Ice(const Ice &src)
{
	std::cout << "Ice copy constructor" << std::endl;
	type = src.getType();
}

Ice &Ice::operator=(const Ice &src)
{
	if (this != &src)
		type = src.getType();
	return *this;
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& ch) {
	std::cout << "* shoots an ice bolt at ";
	std::cout << ch.getName();
	std::cout << " *" << std::endl;
}
