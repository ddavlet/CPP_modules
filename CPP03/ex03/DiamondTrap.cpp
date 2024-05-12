/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:37:36 by ddavlety          #+#    #+#             */
/*   Updated: 2024/05/12 12:04:31 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	this->setHp(FragTrap::getHp());
	this->setEp(ScavTrap::getEp());
	this->setAd(FragTrap::getAd());
	std::cout << "\033[1;33m" << "New risky DiamondTrap joined" << "\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap() {};

DiamondTrap::DiamondTrap(const DiamondTrap& src)
{
	if (this != &src)
		*this = src;
	return ;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	if (this == &src)
		return *this;
	this->_Name = src._Name;
	this->setHp(src.getHp());
	this->setEp(src.getEp());
	this->setAd(src.getAd());
	return *this;
}

DiamondTrap::DiamondTrap(std::string Name) : ScavTrap(Name), FragTrap(Name) {
	ClapTrap::setName(Name + "_clap_name");
	this->_Name = Name;
	this->setHp(FragTrap::getHp());
	this->setEp(ScavTrap::getEp());
	this->setAd(FragTrap::getAd());
	std::cout << "\033[1;33m" << "New risky DiamondTrap joined" << "\033[0m" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "\033[1;33m" << "My name is: " << this->_Name << "\033[0m" << std::endl;
	std::cout << "\033[1;33m" << "My father's name is: " << this->getName() << "\033[0m" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const DiamondTrap& obj)
{
	os << "ClapTraps name: " << obj.getName() << std::endl;
	os << "Health points: " << obj.getHp() << std::endl;
	os << "Energy points: " << obj.getEp() << std::endl;
	os << "Attack damage: " << obj.getAd() << std::endl;
	return os;
}
