/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:04:30 by ddavlety          #+#    #+#             */
/*   Updated: 2024/05/12 09:59:48 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main ()
{
	DiamondTrap p1("Server 1");
	// DiamondTrap p2("Server 2");
	// DiamondTrap p3("Server 3");


	std::cout << p1.getHp() << std::endl;
	std::cout << p1.getEp() << std::endl;
	std::cout << p1.getAd() << std::endl;
	p1.attack("Other server");
	p1.FragTrap::beRepaired(2);
	p1.FragTrap::takeDamage(3);
	p1.highFivesGuys();
	p1.whoAmI();
	std::cout << p1.getHp() << std::endl;
	std::cout << p1.getEp() << std::endl;
	std::cout << p1.getAd() << std::endl;

	// DiamondTrap *poit = new DiamondTrap("Pointer");
	// std::cout << poit->ScavTrap::getHp() << std::endl;
	// std::cout << poit->ScavTrap::getEp() << std::endl;
	// std::cout << poit->ScavTrap::getAd() << std::endl;

	// std::cout << p2.getHp() << std::endl;
	// std::cout << p2.getEp() << std::endl;
	// std::cout << p2.getAd() << std::endl;
	// p2.attack("Other server");
	// p2.beRepaired(2);
	// p2.takeDamage(3);
	// p2.highFivesGuys();
	// std::cout << p2.getHp() << std::endl;
	// std::cout << p2.getEp() << std::endl;
	// std::cout << p2.getAd() << std::endl;

	return 0;
}
