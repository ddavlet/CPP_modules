/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:09:25 by ddavlety          #+#    #+#             */
/*   Updated: 2024/03/12 16:25:54 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{

public:
	Weapon(/* args */);
	~Weapon();
	const std::string&	getType();
	void	setType(const std::string& new_type);

private:
	std::string	type;
};


