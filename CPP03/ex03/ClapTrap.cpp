/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:52:41 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/22 16:28:06 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("default_name"), _Hp(100), _Ep(10), _Ad(10)
{
	std::cout << "New agressive ClapTrap joined" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hp(100), _Ep(10), _Ad(0)
{
	std::cout << "New agressive ClapTrap joined" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "One agressive ClapTrap left" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) : _Name(src._Name)
{
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	if (this != &src)
	{
		this->setName(src.getName());
		this->setHp(src.getHp());
		this->setEp(src.getEp());
		this->setAd(src.getAd());
	}
	return *this;
}
void	ClapTrap::attack(const std::string& target)
{
	if (!this->getEp() || !this->getHp())
		return ;
	this->setEp(this->getEp() - 1);
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
	this->setHp(this->getHp() - real_dmg);
	std::cout << "A wild bug appeared and bit ClapTrap ";
	std::cout << this->_Name;
	std::cout << " for ";
	std::cout << amount;
	std::cout << " damage! Gotta catch 'em all!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->getEp() || !this->getHp())
		return ;
	this->setHp(this->getHp() + amount);
	this->setEp(this->getEp() - 1);
	std::cout << "ClapTrap ";
	std::cout << this->_Name;
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

void	ClapTrap::setHp(unsigned int Hp)
{
	this->_Hp = Hp;
}

void	ClapTrap::setEp(unsigned int Ep)
{
	this->_Ep = Ep;
}

void	ClapTrap::setAd(unsigned int Ad)
{
	this->_Ad = Ad;
}

void	ClapTrap::setName(std::string Name)
{
	this->_Name = Name;
}
