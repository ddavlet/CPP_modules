/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:06:20 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/22 17:58:37 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	// this->setEp(100);
	this->setAd(30);
	std::cout << "\033[1;31m" << "New Friendly FragTrap joined" << "\033[0m" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "\033[1;31m" << "Friendly FragTrap left" << "\033[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "\033[1;31m" << "Hey, catch this highfive!" << "\033[0m" << std::endl;
}
