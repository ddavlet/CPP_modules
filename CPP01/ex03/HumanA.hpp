/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:33:54 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/12 20:49:15 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack();
private:
	HumanA();
	Weapon& _weapon;
	std::string _name;
};

#endif
