/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:39:39 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/23 16:34:55 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal() : type("Any animal") {
	std::cout << "Animal object has been created" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal object has been destroyed" << std::endl;
}

Animal::Animal(const Animal& src) : type(src.type) {
	std::cout << "Animal object has been created from other object" << std::endl;
}

Animal& Animal::operator=(const Animal& src) {
	if (this != &src)
		this->type = src.type;
	std::cout << "Animal object has been created by assign operator" << std::endl;
	return *this;
}

void	Animal::makeSound() const {
	std::cout << "Animal makes sound" << std::endl;
}

std::string	Animal::getType() const {
	return type;
}
