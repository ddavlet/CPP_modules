/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:04:30 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/19 16:22:47 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
	ScavTrap p1("Server 1");
	ScavTrap p2("Server 2");
	ScavTrap p3("Server 3");

	std::cout << p1.getHp() << std::endl;
	std::cout << p1.getEp() << std::endl;
	std::cout << p1.getAd() << std::endl;
	p1.attack("Other server");
	p1.beRepaired(2);
	p1.takeDamage(3);
	p1.guardGate();
	std::cout << p1.getHp() << std::endl;
	std::cout << p1.getEp() << std::endl;
	std::cout << p1.getAd() << std::endl;

	std::cout << p2.getHp() << std::endl;
	std::cout << p2.getEp() << std::endl;
	std::cout << p2.getAd() << std::endl;
	p2.attack("Other server");
	p2.beRepaired(2);
	p2.takeDamage(3);
	p2.guardGate();
	std::cout << p2.getHp() << std::endl;
	std::cout << p2.getEp() << std::endl;
	std::cout << p2.getAd() << std::endl;

	return 0;
}
