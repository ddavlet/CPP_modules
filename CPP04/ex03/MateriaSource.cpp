/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:57:54 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/24 10:03:43 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "MateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

MateriaSource::MateriaSource() : first(0) {
	for (int i = 0; i < 4; i++)
		materia[i] = 0;
	std::cout << "MateriaSource is created" << std::endl;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (materia[i])
			delete (materia[i]);
	std::cout << "MateriaSource is destroyed" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& src) {
	first = src.first;
	for (int i = 0; i < 4; i++)
		if (src.materia[i])
			materia[i] = src.materia[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src) {
	first = src.first;
	for (int i = 0; i < 4; i++)
		if (src.materia[i])
			materia[i] = src.materia[i]->clone();
	return *this;
}

void	MateriaSource::learnMateria(AMateria* new_materia) {
	if (!new_materia)
	{
		std::cout << "No material to learn" << std::endl;
		return ;
	}
	if (materia[first])
		delete (materia[first]);
	materia[first] = new_materia->clone();
	if (first == 3)
		first = 0;
	else
		first++;
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4 && materia[i]; i++)
		if (this->materia[i]->getType() == type)
		{
			return (this->materia[i]->clone());
		}
	std::cout << "wrong material type" << std::endl;
	return 0;
}

#endif
