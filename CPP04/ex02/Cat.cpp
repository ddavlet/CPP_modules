/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:49:46 by ddavlety          #+#    #+#             */
/*   Updated: 2024/06/18 23:03:07 by ddavlety         ###   ########.fr       */
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

Cat::Cat(const Cat& src): brain(new Brain(*src.brain)){
}

Cat& Cat::operator=(const Cat& src) {
    delete this->brain;
    this->brain = new Brain(*src.brain);
    return *this;
}

void	Cat::makeSound() const {
	std::cout << "meow..." << std::endl;
}
