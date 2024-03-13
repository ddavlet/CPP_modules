/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:23:30 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/13 14:53:02 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main (int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "usage: ./harlFilter <level>" << std::endl;
		return 0;
	}
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;
	while (levels[i] != std::string(argv[1]) && i != 4)
		i++;
	if (i == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 0;
	}
	while (i < 4)
		harl.complain(levels[i++]);
	return 0;
}
