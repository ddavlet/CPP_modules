/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:33:46 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/23 21:09:49 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice () : AMateria("ice") {
	std::cout << "Ice constructor" << std::endl;
}

Ice::~Ice () {
	std::cout << "Ice destructor" << std::endl;
}

AMateria* Ice::clone() const {
	return (new Ice());
}

void	Ice::use(ICharacter& ch) {
	std::cout << "* shoots an ice bolt at ";
	std::cout << ch.getName();
	std::cout << " *" << std::endl;
}
