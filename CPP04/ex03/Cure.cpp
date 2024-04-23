/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:33:46 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/23 19:20:17 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure () : AMateria("cure") {
	std::cout << "Cure constructor" << std::endl;
}

Cure::~Cure () {
	std::cout << "Cure destructor" << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure());
}

void	Cure::use(ICharacter& ch) {
	std::cout << "* heals ";
	std::cout << ch.getName();
	std::cout << "’s wounds *" << std::endl;
}
