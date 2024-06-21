/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:52:28 by ddavlety          #+#    #+#             */
/*   Updated: 2024/06/18 23:02:28 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
	type = "Dog";
	std::cout << "Dog object has been created" << std::endl;
}

Dog::~Dog() {
	delete (brain);
	std::cout << "Dog object has been destroyed" << std::endl;
}

Dog::Dog(const Dog& src): brain(new Brain(*src.brain)) {

}

Dog& Dog::operator=(const Dog& src) {
    delete this->brain;
    this->brain = new Brain(*src.brain);
    return *this;
}

void	Dog::makeSound() const {
	std::cout << "woof..." << std::endl;
}
