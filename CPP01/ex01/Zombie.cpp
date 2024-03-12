/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:59:45 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/12 15:23:57 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "Zombie with the name " << this->_name << " destroyed" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

void	Zombie::announce()
{
	std::cout << this->_name << ": " << std::flush;
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
