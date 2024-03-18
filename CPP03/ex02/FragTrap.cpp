/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:46:09 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/17 17:55:36 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap (std::string Name) : ClapTrap(Name)
{
	this->setHp(100);
	this->setEp(100);
	this->setAd(30);
	std::cout << "\033[1;32m" << "New super agressive FragTrap joined" << "\033[0m" << std::endl;
}



FragTrap::~FragTrap()
{
}

