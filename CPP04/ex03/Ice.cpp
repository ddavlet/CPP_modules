/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:33:46 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/23 17:47:05 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice () : AMateria("Ice") {
}

Ice::~Ice () {
}

AMateria* Ice::clone() const {
	return (new Ice());
}

void	Ice::use(ICharacter&) {
	std::cout << "* shoots an ice bolt at ";
	// std::cout << character.;
	std::cout << " *" << std::endl;
}
