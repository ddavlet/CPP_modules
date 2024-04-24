/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:09:10 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/24 10:41:31 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("John Doe") {
	for (int i = 0; i < 4; i++)
		slot[i] = 0;
	std::cout << "Character constructed" << std::endl;
}

Character::Character(std::string name) : name(name) {
	for (int i = 0; i < 4; i++)
		slot[i] = 0;
	std::cout << "Character constructed" << std::endl;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (slot[i])
			delete (slot[i]);
	std::cout << "Character destructed" << std::endl;
}

Character::Character(const Character& src) {
	name = src.name;
	std::copy(src.slot, src.slot + 4, slot);
	std::cout << "Copy Character constructed" << std::endl;
}

Character& Character::operator=(const Character& src) {
	if (this != &src)
	{
		name = src.name;
		for (int i = 0; i < 4; i++)
			if (src.slot[i])
				slot[i] = src.slot[i]->clone();
	}
	std::cout << "Assign Character constructed" << std::endl;
	return *this;
}

void	Character::equip(AMateria* m) {
	int	i = 0;

	while (i < 4 && slot[i])
		i++;
	if (i == 4)
	{
		std::cout << "No free slot for new material" << std::endl;
		return ;
	}
	else
	{
		slot[i] = m;
		std::cout << "Material equiped to slot no: " << i << std::endl;
	}
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
	{
		std::cout << "Wrong index" << std::endl;
		return ;
	}
	slot[idx] = 0;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3)
	{
		std::cout << "Wrong index" << std::endl;
		return ;
	}
	if (slot[idx] == 0)
	{
		std::cout << "slot in index: " << idx << "is empty" <<std::endl;
		return ;
	}
	slot[idx]->use(target);
}

std::string const & Character::getName() const {
	return (this->name);
}
