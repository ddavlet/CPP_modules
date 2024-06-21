/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:49:46 by ddavlety          #+#    #+#             */
/*   Updated: 2024/06/18 21:07:06 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "Cat object has been created" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat object has been destroyed" << std::endl;
}

Cat::Cat(const Cat& src) {

}

Cat& Cat::operator=(const Cat& src) {

}

void	Cat::makeSound() const {
	std::cout << "meow..." << std::endl;
}
