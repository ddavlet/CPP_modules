/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:49:46 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/23 16:37:40 by ddavlety         ###   ########.fr       */
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

void	Cat::makeSound() const {
	std::cout << "meow..." << std::endl;
}
