/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:48:13 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/15 16:54:03 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap (name)
{
	std::cout << "\033[1;32m" << "New non-agressive ScavTrap joined" << "\033[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[1;32m" << "Non-agressive ScavTrap left" << "\033[0m" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "\033[1;32m" << "ScavTrap";
	std::cout << this->getName();
	std::cout << "is now in Gate keeper mode" << "\033[0m" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (!this->getEp() || !this->getHp())
		return ;
	this->setEp(this->getEp() - 1);
	std::cout << "\033[1;32m" << "ScavTrap ";
	std::cout << this->getName();
	std::cout << " throws a stack overflow error at ";
	std::cout << target;
	std::cout << "! Hope they're wearing their debugger!" << "\033[0m" << std::endl;
}
