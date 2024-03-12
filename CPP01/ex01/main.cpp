/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:19:06 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/12 15:38:03 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main()
{
	int zn = 3;

	Zombie *zombie1 = zombieHorde(zn, "zombie");
	for (int i = 0; i < zn; i++)
		zombie1[i].announce();
	delete[] zombie1;
	return 0;
}
