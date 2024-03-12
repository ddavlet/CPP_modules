/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:19:06 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/12 15:22:52 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int	main()
{
	Zombie *zombie1 = newZombie("Zombie dynamic");

	zombie1->announce();
	delete(zombie1);
	randomChump("Zombie static");
	return 0;
}
