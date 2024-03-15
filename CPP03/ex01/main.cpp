/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:04:30 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/15 16:42:04 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
	ScavTrap p1("Server 1");
	ScavTrap p2("Server 2");
	ScavTrap p3("Server 3");

	p1.attack("Other server");
	p1.beRepaired(2);
	p1.takeDamage(3);

	p2.attack("Other server");
	p2.beRepaired(2);
	p2.takeDamage(3);

	p3.attack("Other server");
	p3.beRepaired(2);
	p3.takeDamage(3);
	return 0;
}
