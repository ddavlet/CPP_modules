/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:06:20 by ddavlety          #+#    #+#             */
/*   Updated: 2024/05/12 09:18:23 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->setHp(100);
	this->setEp(100);
	this->setAd(30);
}


FragTrap::~FragTrap(){
	std::cout << "\033[1;31m" << "Friendly FragTrap left" << "\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src)
{
	if (this != &src)
		*this = src;
	return ;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	if (this == &src)
		return *this;
	this->setName(src.getName());
	this->setHp(src.getHp());
	this->setEp(src.getEp());
	this->setAd(src.getAd());
	return *this;

}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	this->setHp(100);
	this->setEp(100);
	this->setAd(30);
	std::cout << "\033[1;31m" << "New Friendly FragTrap joined" << "\033[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "\033[1;31m" << "Hey, catch this highfive!" << "\033[0m" << std::endl;
}
