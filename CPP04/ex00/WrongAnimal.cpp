/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:39:39 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/22 22:18:38 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() : type("Any animal") {
	std::cout << "WrongAnimal object has been created" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal object has been destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) : type(src.type) {
	std::cout << "WrongAnimal object has been created from other object" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
	if (this != &src)
		this->type = src.type;
	std::cout << "WrongAnimal object has been created by assign operator" << std::endl;
	return *this;
}

void	WrongAnimal::makeSound() const {

	std::cout << "WrongAnimal makes sound" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return this->type;
}
