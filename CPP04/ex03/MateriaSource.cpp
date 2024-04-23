/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:57:54 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/23 21:56:37 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "MateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

MateriaSource::MateriaSource() : first(0) {
	std::cout << "MateriaSource is created" << std::endl;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource is destroyed" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& src) {
	std::copy(src.materia, src.materia + 4, materia);
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src) {
	std::copy(src.materia, src.materia + 4, materia);
	return *this;
}

void	MateriaSource::learnMateria(AMateria* new_materia) {
	if (!new_materia)
	{
		std::cout << "No material to learn" << std::endl;
		return ;
	}
	// delete (materia[first]);
	materia[first] = new_materia->clone();
	if (first == 3)
		first = 0;
	else
		first++;
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; this->materia[i] && i < 4; i++)
		if (this->materia[i]->getType() == type)
		{
			return (this->materia[i]->clone());
		}
	std::cout << "wrong material type" << std::endl;
	return nullptr;
}

#endif
