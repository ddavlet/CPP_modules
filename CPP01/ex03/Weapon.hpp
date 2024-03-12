/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:09:25 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/12 20:00:24 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{

public:
	Weapon();
	Weapon(const std::string& type);
	~Weapon();
	const std::string&	getType();
	void	setType(const std::string& new_type);

private:
	std::string	type;
};

#endif
