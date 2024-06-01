/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:06:20 by ddavlety          #+#    #+#             */
/*   Updated: 2024/06/01 22:32:44 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_Hp = (100);
	this->_Ep = (100);
	this->_Ad = (30);
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
	this->_Name = (src.getName());
	this->_Hp = (src.getHp());
	this->_Ep = (src.getEp());
	this->_Ad = (src.getAd());
	return *this;

}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	this->_Hp = (100);
	this->_Ep = (100);
	this->_Ad = (30);
	std::cout << "\033[1;31m" << "New Friendly FragTrap joined" << "\033[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "\033[1;31m" << "Hey, catch this highfive!" << "\033[0m" << std::endl;
}
