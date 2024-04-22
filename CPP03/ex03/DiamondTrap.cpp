/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:37:36 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/22 18:25:24 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name"), ScavTrap(Name + "_clap_name"), FragTrap(Name + "_clap_name") {
	this->_name = Name;
	std::cout << "\033[1;33m" << "New risky DiamondTrap joined" << "\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap(){

}

void	DiamondTrap::setHp(unsigned int Hp) {
	FragTrap::setHp(Hp);
}

void	DiamondTrap::setEp(unsigned int Ep) {
	FragTrap::setEp(Ep);
}

void	DiamondTrap::setAd(unsigned int Ad) {
	FragTrap::setAd(Ad);
}

// void	DiamondTrap::attack(const std::string& target) {
// 	ScavTrap::attack(target);
// }

void	DiamondTrap::whoAmI() {
	std::cout << "\033[1;33m" << "My name is: " << this->_name << "\033[0m" << std::endl;
	std::cout << "\033[1;33m" << "My father's name is: " << this->getName() << "\033[0m" << std::endl;
}
