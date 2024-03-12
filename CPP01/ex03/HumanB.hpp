/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:40:43 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/12 20:49:31 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(const std::string& name);
	~HumanB();
	void attack();
	void setWeapon(Weapon& weapon);
private:
	HumanB(void);
	Weapon* _weapon;
	std::string _name;
};

#endif
