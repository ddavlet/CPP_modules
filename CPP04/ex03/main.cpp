/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:30:04 by ddavlety          #+#    #+#             */
/*   Updated: 2024/04/23 17:48:24 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"

int main (void) {
	AMateria *tmp = NULL;
	Ice tmp2;

	// std::cout << tmp->getType() << std::endl;
	std::cout << &tmp2.getType() << std::endl;
	tmp = &tmp2;
	std::cout << &tmp->getType() << std::endl;
	std::cout << &tmp2.getType() << std::endl;
	return (0);
}
