/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:30:04 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/24 10:54:19 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main (void) {
	AMateria	*tmp;
	AMateria	*tmp_2;
	Ice			ice1;
	Cure		cure1;
	Ice			ice2(ice1);

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
	Character tmp2("test_character");
	tmp = ice1.clone();
	std::cout << tmp << std::endl;
	std::cout << &ice1 << std::endl;
	tmp->use(tmp2);
	delete (tmp);
	std::cout << "----end of test----" << std::endl;



	std::cout << "----test of MaterialsSource----" << std::endl;
	MateriaSource	mat_source;
	MateriaSource	mat_source2;
	MateriaSource	*mat_source_ptr;

	mat_source.learnMateria(&cure1);
	mat_source.learnMateria(&ice2);
	mat_source.learnMateria(0);
	tmp = mat_source.createMateria("ice");
	std::cout << tmp << std::endl;
	delete (tmp);
	mat_source_ptr = &mat_source;
	mat_source2 = mat_source;
	std::cout << mat_source_ptr << std::endl;
	std::cout << &mat_source << std::endl;
	std::cout << &mat_source2 << std::endl;
	std::cout << "----end of test----" << std::endl;

	std::cout << "----test of Character----" << std::endl;
	tmp = new Cure();
	mat_source.learnMateria(tmp);
	delete (tmp);
	Character	character("James");
	Character	character2("Joe");
	std::cout << character.getName() << std::endl;
	tmp = mat_source.createMateria("ice");
	character.equip(tmp);
	tmp_2 = tmp;
	tmp = mat_source.createMateria("ice");
	character.equip(tmp);
	tmp = mat_source.createMateria("cure");
	character.equip(tmp);
	tmp = mat_source.createMateria("cure");
	character.equip(tmp);
	tmp = mat_source.createMateria("cure");
	character.equip(tmp);
	delete(tmp);
	character.use(0, character2);
	character2 = character;
	tmp = mat_source.createMateria("cure");
	delete tmp;
	character.unequip(0);
	delete tmp_2;
	std::cout << "----end of test----" << std::endl;

	std::cout << "----test by subject----" << std::endl;
	IMateriaSource* src = new MateriaSource();
	tmp_2 = new Ice();
	src->learnMateria(tmp_2);
	delete tmp_2;
	tmp_2 = new Cure();
	src->learnMateria(tmp_2);
	delete tmp_2;
	ICharacter* me = new Character("me");
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return (0);
}
