/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:38:09 by ddavlety          #+#    #+#             */
/*   Updated: 2024/06/18 23:01:18 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Dog dog;
    Dog dog2(dog);
	Cat cat;

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
    std::cout << dog2.getType() << std::endl;
	i->makeSound();
	j->makeSound();
	// meta->makeSound();

	// delete (meta);
	delete (j);
	delete (i);

	return 0;
}
