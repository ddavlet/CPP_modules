/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:23:30 by ddavlety          #+#    #+#             */
/*   Updated: 2024/05/05 13:03:02 by ddavlety         ###   ########.fr       */
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
	switch (i)
	{
	case 0:
		harl.complain(levels[0]);
	case 1:
		harl.complain(levels[1]);
	case 2:
		harl.complain(levels[2]);
	case 3:
		harl.complain(levels[3]);
		break;
	default:
		harl.complain("other");
		break;
	}
	return 0;
}
