/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:23:30 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/13 12:47:38 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main (void)
{
	Harl harl;

	std::cout << "DEBUG:" << std::endl;
	harl.complain("debug");
	std::cout << "\nINFO:" << std::endl;
	harl.complain("info");
	std::cout << "\nWARNING:" << std::endl;
	harl.complain("warning");
	std::cout << "\nERROR:" << std::endl;
	harl.complain("error");
	std::cout << "\nNOTFOUND:" << std::endl;
	harl.complain("nothing");
}
