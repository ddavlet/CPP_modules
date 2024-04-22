/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:52:28 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/22 22:29:02 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << "Dog object has been created" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog object has been destroyed" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "bark..." << std::endl;
}

std::string	Dog::getType() const {
	return type;
}
