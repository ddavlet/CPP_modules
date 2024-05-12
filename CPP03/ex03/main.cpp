/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:04:30 by ddavlety          #+#    #+#             */
/*   Updated: 2024/05/12 12:06:20 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main ()
{
	DiamondTrap p1("Server 1");
	DiamondTrap p2("Server 2");
	DiamondTrap p3("Server 3");

	p1.whoAmI();
	std::cout << p1;
	p1.attack("Other server");
	p1.FragTrap::beRepaired(2);
	p1.FragTrap::takeDamage(3);
	p1.highFivesGuys();
	p1.whoAmI();
	std::cout << p1;
	DiamondTrap *poit = new DiamondTrap("Pointer");
	poit->whoAmI();
	std::cout << *poit;
	p2.whoAmI();
	std::cout << p2;
	p2 = p1;
	p2.whoAmI();
	std::cout << p2;
	return 0;
}
