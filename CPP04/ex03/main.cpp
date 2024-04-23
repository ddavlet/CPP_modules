/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:30:04 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/23 21:59:39 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main (void) {
	AMateria *tmp;
	Ice ice1;
	Cure cure1;
	Ice ice2(ice1);

	std::cout << "----test of copy and asign methods----" << std::endl;
	tmp = &ice1;
	std::cout << tmp << std::endl;
	std::cout << &ice1 << std::endl;
	tmp = &cure1;
	std::cout << tmp << std::endl;
	std::cout << &cure1 << std::endl;

	std::cout << &ice1 << std::endl;
	std::cout << &ice2 << std::endl;
	std::cout << "----end of test----" << std::endl;

	std::cout << "----test of Materials methods----" << std::endl;
	tmp = ice1.clone();
	std::cout << tmp << std::endl;
	std::cout << &ice1 << std::endl;
	// ice1.use();
	std::cout << "----end of test----" << std::endl;



	std::cout << "----test of MaterialsSource----" << std::endl;
	MateriaSource	mat_source;
	MateriaSource	mat_source2;
	MateriaSource	*mat_source_ptr;

	mat_source.learnMateria(new Ice());
	mat_source.learnMateria(&ice2);
	mat_source.learnMateria(nullptr);
	std::cout << mat_source.createMateria("ice") << std::endl;
	mat_source_ptr = &mat_source;
	mat_source2 = mat_source;
	std::cout << mat_source_ptr << std::endl;
	std::cout << &mat_source << std::endl;
	std::cout << &mat_source2 << std::endl;
	std::cout << mat_source.createMateria("ice") << std::endl;
	std::cout << mat_source2.createMateria("cure") << std::endl;
	std::cout << "----end of test----" << std::endl;
	return (0);
}
