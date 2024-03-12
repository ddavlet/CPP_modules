/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:14:26 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/12 20:00:25 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

Weapon::Weapon(const std::string& type) : type(type)
{
}

const std::string&	Weapon::getType()
{
	return this->type;
}

void	Weapon::setType(const std::string&	new_type)
{
	this->type = new_type;
}
