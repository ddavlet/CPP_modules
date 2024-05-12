/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:37:36 by ddavlety          #+#    #+#             */
/*   Updated: 2024/05/12 10:01:35 by ddavlety         ###   ########.fr       */
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
	this->_name = src._name;
	this->setHp(src.getHp());
	this->setEp(src.getEp());
	this->setAd(src.getAd());
	return *this;
}

DiamondTrap::DiamondTrap(std::string Name) : ScavTrap(Name + "_clap_name"), FragTrap(Name + "_clap_name") {
	this->_name = Name;
	this->setHp(FragTrap::getHp());
	this->setEp(ScavTrap::getEp());
	this->setAd(FragTrap::getAd());
	std::cout << "\033[1;33m" << "New risky DiamondTrap joined" << "\033[0m" << std::endl;
}

void	DiamondTrap::setHp(unsigned int Hp)
{
	FragTrap::setHp(Hp);
}

void	DiamondTrap::setEp(unsigned int Ep)
{
	FragTrap::setEp(Ep);
}

void	DiamondTrap::setAd(unsigned int Ad)
{
	FragTrap::setAd(Ad);
}

unsigned int	DiamondTrap::getHp() const
{
	return FragTrap::getHp();
}

unsigned int	DiamondTrap::getEp() const
{
	return ScavTrap::getEp();
}

unsigned int	DiamondTrap::getAd() const
{
	return FragTrap::getAd();
}

std::string	DiamondTrap::getName() const
{
	return FragTrap::getName();
}

void	DiamondTrap::whoAmI()
{
	std::cout << "\033[1;33m" << "My name is: " << this->_name << "\033[0m" << std::endl;
	std::cout << "\033[1;33m" << "My father's name is: " << this->getName() << "\033[0m" << std::endl;
}
