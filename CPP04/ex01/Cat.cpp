/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:49:46 by ddavlety          #+#    #+#             */
/*   Updated: 2024/07/22 13:07:53 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain()) {
	type = "Cat";
	std::cout << "Cat object has been created" << std::endl;
}

Cat::~Cat() {
	delete (brain);
	std::cout << "Cat object has been destroyed" << std::endl;
}

Cat::Cat(const Cat& src): brain(new Brain(*src.brain)) {
	type = src.getType();
}

Cat& Cat::operator=(const Cat& src) {
	if (this != &src)
	{
		delete this->brain;
		this->brain = new Brain(*src.brain);
		type = src.getType();
	}
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "meow..." << std::endl;
}
