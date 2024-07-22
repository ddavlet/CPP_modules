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
	std::cout << "Cure default constructor" << std::endl;
}

Cure::~Cure () {
	std::cout << "Cure destructor" << std::endl;
}

Cure::Cure(const Cure &src)
{
	std::cout << "Cure copy constructor" << std::endl;
	type = src.getType();
}

Cure &Cure::operator=(const Cure &src)
{
	if (this != &src)
		type = src.getType();
	return *this;
}

AMateria* Cure::clone() const {
	return (new Cure());
}

void	Cure::use(ICharacter& ch) {
	std::cout << "* heals ";
	std::cout << ch.getName();
	std::cout << "’s wounds *" << std::endl;
}
