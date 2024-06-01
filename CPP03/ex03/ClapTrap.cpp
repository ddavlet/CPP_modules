/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:52:41 by ddavlety          #+#    #+#             */
/*   Updated: 2024/06/01 22:27:16 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Hp(10), _Ep(10), _Ad(0)
{
	std::cout << "New default agressive ClapTrap joined" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hp(10), _Ep(10), _Ad(0)
{
	std::cout << "New agressive ClapTrap joined" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "One agressive ClapTrap left" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	if (this != &src)
		*this = src;
	return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	if (this != &src)
	{
		this->_Name = src.getName();
		this->_Hp = src.getHp();
		this->_Ep = src.getEp();
		this->_Ad = src.getAd();
	}
	return *this;
}
void	ClapTrap::attack(const std::string& target)
{
	if (!this->getEp() || !this->getHp())
		return ;
	this->_Ep = this->getEp() - 1;
	std::cout << "ClapTrap ";
	std::cout << this->getName();
	std::cout << " throws a stack overflow error at ";
	std::cout << target;
	std::cout << "! Hope they're wearing their debugger!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int real_dmg = amount;

	if (!this->getHp())
		return ;
	if (amount > this->getHp())
		real_dmg = this->getHp();
	this->_Hp = this->getHp() - real_dmg;
	std::cout << "A wild bug appeared and bit ClapTrap ";
	std::cout << this->getName();
	std::cout << " for ";
	std::cout << amount;
	std::cout << " damage! Gotta catch 'em all!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->getEp() || !this->getHp())
		return ;
	this->_Hp = this->getHp() + amount;
	this->_Ep = this->getEp() - 1;
	std::cout << "ClapTrap ";
	std::cout << this->getName();
	std::cout << " found a debugging tool and feels ";
	std::cout << amount;
	std::cout << " times better! It's super effective!" << std::endl;
}

unsigned int	ClapTrap::getHp() const
{
	return (this->_Hp);
}
unsigned int	ClapTrap::getEp() const
{
	return (this->_Ep);
}
unsigned int	ClapTrap::getAd() const
{
	return (this->_Ad);
}

std::string	ClapTrap::getName() const
{
	return (this->_Name);
}
