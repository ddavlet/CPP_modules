/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:52:28 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/22 23:21:34 by ddavlety         ###   ########.fr       */
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

void	Dog::makeSound() const {
	std::cout << "bark..." << std::endl;
}

std::string	Dog::getType() const {
	return type;
}
